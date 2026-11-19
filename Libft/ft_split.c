/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:30:53 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 11:12:53 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			word++;
	}
	return (word);
}

static int	count_letters(char const *s, char c, int i)
{
	int	letter;

	letter = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		letter++;
		i++;
	}
	return (letter);
}

static char	*ft_strndup(const char *s, char *res, int size, int *index)
{
	int		i;

	i = 0;
	while (s[i] && i < size)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	*index += i;
	return (res);
}

static char	**free_list(char **res, int word)
{
	int	i;

	i = 0;
	while (i <= word)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		letter;
	int		word;

	i = 0;
	word = 0;
	if (s == 0)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (word < count_words(s, c))
	{
		letter = count_letters(s, c, i);
		while (s[i] == c)
			i++;
		res[word] = malloc(sizeof(char) * (letter + 1));
		if (!res[word])
			return (free_list(res, word));
		res[word] = ft_strndup((s + i), res[word], letter, &i);
		word++;
	}
	res[word] = NULL;
	return (res);
}
