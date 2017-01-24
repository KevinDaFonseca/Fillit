/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:19:11 by kda-fons          #+#    #+#             */
/*   Updated: 2016/12/05 16:09:49 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	s += n;
	d += n;
	while (n--)
		*--d = *--s;
	return (dest);
}
