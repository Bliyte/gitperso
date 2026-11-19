/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:31:02 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 13:47:53 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while ((i < (n - 1)) && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
