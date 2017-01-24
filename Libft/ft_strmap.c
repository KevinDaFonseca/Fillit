/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 01:59:35 by kda-fons          #+#    #+#             */
/*   Updated: 2016/11/30 02:52:18 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(tmp = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
		tmp[i++] = f(*s++);
	tmp[i] = '\0';
	return (tmp);
}
