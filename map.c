/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:21:44 by kda-fons          #+#    #+#             */
/*   Updated: 2017/02/01 15:22:03 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*create_map(size_t size)
{
	int	i;
	int	j;
	t_map	*tmp;

	if(!(tmp = malloc(sizeof(t_map))))
		return (NULL);
	if(!(tmp->array = malloc(sizeof(char *) * size)))
		return (NULL);
	tmp->size = size;
	i = 0;
	j = 0;
	while (i < size)
	{
		tmp->array[i] = ft_strnew(size);
		while (j < size)
		{
			tmp->array[i][j] = '.';
			j++;
		}
		i++;
	}
	return (tmp);
}

void	place_tetri(t_tetri *tetri, t_map *map)
