/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:47:12 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/31 00:47:13 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	index_big;
	size_t	index_lit;

	if (little[0] == '\0')
		return ((char *) big);
	index_big = 0;
	while (big[index_big] && index_big < n)
	{
		index_lit = 0;
		while (big[index_big + index_lit] == little[index_lit] \
			&& big[index_big + index_lit] && index_big + index_lit < n)
		{
			if (little[index_lit + 1] == '\0')
				return ((char *) big + index_big);
			index_lit++;
		}
		index_big++;
	}
	return (NULL);
}
