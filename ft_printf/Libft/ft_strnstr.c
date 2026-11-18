/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:08:02 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/13 16:45:32 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lent;

	lent = ft_strlen(little);
	i = 0;
	j = 0;
	if (lent == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		while ((big[i] == little[j]) && i < len)
		{
			i++;
			j++;
			if (lent == j)
				return ((char *)big + (i - j));
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
