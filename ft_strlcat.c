/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:39 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/22 21:02:08 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= size)
		return (srclen + size);
	i = 0;
	while (src[1] && destlen + i < size - 1)
		dest[destlen + i] = src[i];
		i++;
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
