/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 01:41:37 by kda-fons          #+#    #+#             */
/*   Updated: 2016/12/06 07:09:38 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int base, int power)
{
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
			return (base * ft_pow(base, power - 1));
	}
}
