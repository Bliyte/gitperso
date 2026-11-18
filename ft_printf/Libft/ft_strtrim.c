/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:35:09 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/13 16:45:57 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	delimit(int *j, int *lent, char const *set, char const *s1)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[*j] == set[i])
		{
			*j = *j + 1;
			i = -1;
		}
		i++;
	}
	i = 0;
	while (set[i] && (*j != (*lent + 1)))
	{
		if (s1[*lent] == set[i])
		{
			*lent = *lent - 1;
			i = -1;
		}
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		lent;

	i = 0;
	j = 0;
	lent = (ft_strlen(s1) - 1);
	delimit(&j, &lent, set, s1);
	res = malloc(sizeof(char) * (lent - j + 2));
	if (!res)
		return (NULL);
	while (j <= lent)
	{
		res[i] = s1[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
