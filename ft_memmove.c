/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:01:31 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/22 17:01:33 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temporarysrc;
	unsigned char	*temporarydest;
	size_t			i;

	if (n == 0 || dest == src)
		return (dest);
	if (src == NULL && dest == NULL)
		return (NULL);
	temporarysrc = (unsigned char *) src;
	temporarydest = (unsigned char *) dest;
	i = 0;
	if (temporarydest > temporarysrc)
	{
		while (n-- > 0)
			temporarydest[n] = temporarysrc[n];
	}
	else
	{
		while (i < n)
		{
			temporarydest[i] = temporarysrc[i];
			i++;
		}
	}
	return (dest);
}
