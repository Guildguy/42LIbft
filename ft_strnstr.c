/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:47:12 by fleite-j          #+#    #+#             */
/*   Updated: 2024/10/31 00:47:13 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	ib;
	size_t	il;

	if (little[0] == '\0')
		return ((char *) big);
	ib = 0;
	while (big[ib] && ib < n)
	{
		il = 0;
		while (big[ib + il] == little[il] && big[ib + il] && ib + il < n)
		{
			if (little[il + 1] == '\0')
				return ((char *) big + ib);
			il++;
		}
		ib++;
	}
	return (NULL);
}
