/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:16:05 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/18 15:47:06 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*tempo(char const *s, size_t *len, char *res, unsigned int *start)
{
	size_t	i;

	i = 0;
	while (s[i + *start] && (i < *len))
	{
		res[i] = s[i + *start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = tempo(s, &len, res, &start);
	return (res);
}
