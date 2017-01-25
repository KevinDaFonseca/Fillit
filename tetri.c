#include "fillit.h"

t_tetri	*create_tetri(char *str, char carac)
{
	size_t		i;
	size_t		j;
	size_t		current;
	t_tetri		*new;

	if (!(new = malloc(sizeof(t_tetri))))
		return (NULL);
	i = 0;
	j = 0;
	current = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			j++;
		if (str[i] == '#')
		{
			new->coord[current][0] = (i % 5);
			new->coord[current][1] = j;
			current++;
		}
		i++;
	}
	new->value = carac;
	new->right = NULL;
	return (new);
}

void	add_tetri(t_tetri **tetri, t_tetri *new)
{
	t_tetri *tmp;

	tmp = *tetri;
	while (tmp->right != NULL)
		tmp = tmp->right;
	tmp->right = new;
}

void	free_tetri(t_tetri **tetri)
{
	t_tetri *tmp;
	tmp = tetri->right;
	free(tetri);
	free_tetri(tmp);
}
