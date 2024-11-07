/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:09:37 by fleite-j          #+#    #+#             */
/*   Updated: 2024/11/07 20:09:40 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	interger_len(long number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		count++;
		number = -number;
	}
	if (number == 0)
		count++;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conversion(int len)
{
	char	*temporary;

	temporary = (char *)malloc((len + 1) * sizeof(char));
	if (!temporary)
		return (NULL);
	temporary[len] = '\0';
	return (temporary);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	number;
	char	*result;

	number = (long) n;
	len = interger_len(number);
	result = pre_conversion(len);
	if (!result)
		return (NULL);
	i = len - 1;
	if (number == 0)
		result[i] = '0';
	while (number != 0)
	{
		result[i] = ((number % 10) + 48);
		number /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
