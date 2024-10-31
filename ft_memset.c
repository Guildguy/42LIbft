/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:59:40 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/22 16:59:44 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temporary;

	temporary = (unsigned char *) s;
	while (n > 0)
	{
		*(temporary++) = (unsigned char) c;
		n--;
	}
	return (s);
}
