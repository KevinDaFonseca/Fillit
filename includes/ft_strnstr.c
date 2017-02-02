/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 05:02:55 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/29 06:55:48 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hsk, const char *ndl, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 1;
	k = ft_strlen(ndl);
	if (!ndl[0])
		return (&(((char *)hsk)[0]));
	while (hsk[i] && n >= k)
	{
		j = 0;
		if (hsk[i] == ndl[0])
		{
			while (hsk[i + j] == ndl[j])
			{
				if (j == k - 1)
					return (&(((char *)hsk)[i]));
				j++;
			}
		}
		i++;
		n--;
	}
	return (NULL);
}
