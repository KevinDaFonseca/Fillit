/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 06:11:18 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/29 08:14:58 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = ft_strlen(src);
	while (dest[i] && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
			dest[i++] = src[j++];
	}
	if (j > 0)
	{
		dest[i] = '\0';
		return (k + i - j);
	}
	return (k + i);
}
