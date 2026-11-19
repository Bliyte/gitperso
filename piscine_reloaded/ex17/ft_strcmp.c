/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:12:25 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 13:53:58 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_strcmp("Bonjour", "Bonjour"));
	__builtin_printf("%d\n", strcmp("Bonjour", "Bonjour"));
	return (0);
}*/