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

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temporary;
	size_t			i;

	i = 0;
	temporary = (unsigned char *) s;
	while (i < n)
	{
		temporary[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
