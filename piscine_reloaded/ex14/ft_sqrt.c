/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:58:45 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 10:55:28 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_sqrt(12));
	__builtin_printf("%d\n", ft_sqrt(-8));
	__builtin_printf("%d\n", ft_sqrt(16));
	__builtin_printf("%d\n", ft_sqrt(25));
	__builtin_printf("%d\n", ft_sqrt(2));
	return (0);
}*/