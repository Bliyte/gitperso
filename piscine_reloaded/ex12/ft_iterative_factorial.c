/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:11:39 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 15:08:45 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb <= 1 && nb >= 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	if (nb <= -2147483648 || nb >= 2147483647)
		return (0);
	return (nb);
}

/*int	main(void)
{
	__builtin_printf("%d\n", ft_iterative_factorial(5));
	__builtin_printf("%d\n", ft_iterative_factorial(-5));
	__builtin_printf("%d\n", ft_iterative_factorial(0));
	__builtin_printf("%d\n", ft_iterative_factorial(1));
	__builtin_printf("%d\n", ft_iterative_factorial(2));
	__builtin_printf("%d\n", ft_iterative_factorial(15));
	__builtin_printf("%d\n", ft_iterative_factorial(32));
	__builtin_printf("%d\n", ft_iterative_factorial(1855));
	return (0);
}*/