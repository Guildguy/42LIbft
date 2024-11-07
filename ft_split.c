/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:11:58 by fleite-j          #+#    #+#             */
/*   Updated: 2024/11/07 20:12:00 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init_var(size_t *str_index, int *substr_index, int *first_word)
{
	*str_index = 0;
	*substr_index = 0;
	*first_word = -1;
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*create_substr(const char *str, int start, int end)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc((end - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start < end)
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**substring;
	size_t	str_index;
	int		substr_index;
	int		first_word;

	init_var(&str_index, &substr_index, &first_word);
	substring = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!substring)
		return (NULL);
	while (str_index <= ft_strlen(s))
	{
		if (s[str_index] != c && first_word < 0)
			first_word = str_index;
		else if ((s[str_index] == c
				|| str_index == ft_strlen(s)) && first_word >= 0)
		{
			substring[substr_index] = create_substr(s, first_word, str_index);
			if (!(substring[substr_index]))
				return (ft_free(substring, substr_index));
			first_word = -1;
			substr_index++;
		}
		str_index++;
	}
	return (substring);
}
