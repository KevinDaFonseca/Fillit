/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:50:26 by kda-fons          #+#    #+#             */
/*   Updated: 2017/01/24 15:49:32 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef	struct		s_tetri
{
	unsigned int	coord[4][2];
	char		value;
	struct s_tetri	*right;
	struct s_tetri	*left;
}					t_tetri;

typedef	struct		s_map
{
	size_t			size;
	char			**array;
}					t_map;

#endif
