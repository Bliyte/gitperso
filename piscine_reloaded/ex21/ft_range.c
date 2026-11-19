/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:14:30 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 10:57:57 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	i = 0;
	int	*array = ft_range(-2, 9);
	
	while (i < 12)
	{
		__builtin_printf("%d\n", array[i]);
		i++;
	}
	return (0);
}*/