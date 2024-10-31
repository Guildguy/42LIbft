/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:48:28 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/30 16:49:37 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temporary;
	size_t			i;

	i = 0;
	temporary = malloc(nmemb * size);
	if (!temporary)
		return (NULL);
	while (i < nmemb * size)
	{
		temporary[i] = 0;
		i++;
	}
	return (temporary);
}
