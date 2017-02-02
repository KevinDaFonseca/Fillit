/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 01:19:05 by kda-fons          #+#    #+#             */
/*   Updated: 2016/12/06 05:04:19 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sqrt(size_t base)
{
	size_t	sqrt;
	size_t	result;

	sqrt = 1;
	result = 0;
	while (sqrt < base / 2)
	{
		result = sqrt * sqrt;
		if (result == base)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
