/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:34:21 by kda-fons          #+#    #+#             */
/*   Updated: 2016/12/05 20:13:49 by kda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t		count;
	size_t		j;

	count = 0;
	j = -1;
	if (!s)
		return (0);
	while (s[++j] != '\0')
		if (s[j] != c && (s[j - 1] == c || j == 0))
			count++;
	return (count);
}

static char		*ft_word(char const *s, char c, size_t *start)
{
	char		*w;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(w = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[*start] != c && s[*start])
	{
		w[i] = s[*start];
		i++;
		*start += 1;
	}
	w[i] = '\0';
	while (s[*start] == c && s[*start])
		*start += 1;
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	size_t		words;
	size_t		i;
	size_t		j;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(arr = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (j < words && s[i])
	{
		arr[j] = ft_word(s, c, &i);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
