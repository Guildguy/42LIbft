/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:45:49 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/31 00:45:52 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	bytec;
	size_t			i;

	ptrs = (unsigned char *) s;
	bytec = (unsigned char ) c;
	i = 0;
	while (i < n)
	{
		if (ptrs[i] == bytec)
			return ((void *) ptrs + i);
		i++;
	}
	return (NULL);
}
