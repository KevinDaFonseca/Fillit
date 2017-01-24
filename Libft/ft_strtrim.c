/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 08:11:20 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/30 10:18:52 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char		*tmp;
	size_t		len;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(tmp = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (ft_istrim(s[len - 1]))
		len--;
	while (ft_istrim(s[i]))
		i++;
	if (!s[i])
	{
		tmp = ft_strnew(0);
		return (tmp);
	}
	tmp = ft_strsub(s, i, len - i);
	return (tmp);
}
