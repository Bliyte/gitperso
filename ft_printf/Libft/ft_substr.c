/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:16:05 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/13 16:46:02 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s))
		res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s[i + start] && (i < len))
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
