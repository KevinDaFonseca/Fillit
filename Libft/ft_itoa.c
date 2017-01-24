/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:30:29 by kda-fons          #+#    #+#             */
/*   Updated: 2016/12/05 18:50:02 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(int n)
{
	int			size;

	size = (n < 0);
	while (n /= 10)
		size++;
	return (size + 1);
}

char			*ft_itoa(int n)
{
	char		*s;
	size_t		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_size(n);
	if (!(s = malloc(sizeof(char) * i + 1)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	s[i] = '\0';
	while (i-- > (s[0] == '-'))
	{
		s[i] = n % 10 + 48;
		n /= 10;
	}
	return (s);
}
