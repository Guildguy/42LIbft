/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:09:37 by fleite-j          #+#    #+#             */
/*   Updated: 2024/11/08 18:49:46 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	interger_len(long number)
{
	int	count;

	count = 0;
	if (number <= 0)
		count++;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

static char	*str_allocation(int len)
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
	result = str_allocation(len);
	if (!result)
		return (NULL);
	i = len - 1;
	if (number == 0)
		result[i--] = '0';
	if (n < 0)
	{
		result[0] = '-';
		number = -number;
	}
	while (number != 0)
	{
		result[i--] = ((number % 10) + '0');
		number /= 10;
	}
	return (result);
}
