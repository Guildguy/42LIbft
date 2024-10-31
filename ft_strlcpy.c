/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:00:23 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/22 17:00:25 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_memcopy(dest, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcopy(dest, src, srclen - 1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}
