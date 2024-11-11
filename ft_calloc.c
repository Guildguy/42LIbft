/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:48:28 by fleite-j          #+#    #+#             */
/*   Updated: 2024/11/11 14:42:00 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temporary;
	size_t			buffer;

	if (nmemb == 0 || size == 0 || nmemb > SIZE_MAX / size)
		return (NULL);
	buffer = nmemb * size;
	temporary = malloc(buffer);
	if (!temporary)
		return (NULL);
	ft_bzero(temporary, buffer);
	return (temporary);
}
