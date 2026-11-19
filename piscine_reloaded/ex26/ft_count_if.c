/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:43:49 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/04 16:51:50 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			j++;
		}
		i++;
	}
	return (j);
}

/*int	is_long(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i > 3);
}

int	always_one(char *str)
{
	(void)str;
	return (1);
}

int	always_zero(char *str)
{
	(void)str;
	return (0);
}

int	main(void)
{
	char	*tab[] = {"un", "deux", "trois", "quatre", "a", 0};
	char	*vide[] = {0};

	printf("is_long     : %d (attendu : 3)\n", ft_count_if(tab, &is_long));
	printf("always_one  : %d (attendu : 5)\n", ft_count_if(tab, &always_one));
	printf("always_zero : %d (attendu : 0)\n", ft_count_if(tab, &always_zero));
	printf("tableau vide: %d (attendu : 0)\n", ft_count_if(vide, &always_one));
	return (0);
}*/