/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:58:11 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 12:02:51 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(dup, src);
	return (dup);
}

/*int	main(void)
{
	__builtin_printf("%s\n", ft_strdup("Ceci est un test"));
	return (0);
}*/
