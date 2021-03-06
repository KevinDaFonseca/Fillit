/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 05:49:53 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/30 10:16:41 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*tmp;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tmp = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len-- > 0)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
