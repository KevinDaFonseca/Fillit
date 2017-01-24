/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 05:02:55 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/30 01:22:52 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hsk, const char *ndl)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(ndl);
	if (k == 0)
		return ((char *)hsk);
	while (hsk[i])
	{
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
	}
	return (NULL);
}
