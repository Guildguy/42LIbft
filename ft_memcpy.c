/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:54 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/22 16:59:23 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temporarysrc;
	unsigned char	*temporarydest;

	if (src == NULL || dest == NULL)
		return (NULL);
	temporarysrc = (unsigned char *) src;
	temporarydest = (unsigned char *) dest;
	while (n > 0)
	{
		*(temporarydest)++ = *(temporarysrc)++;
		n--;
	}
	return (dest);
}
