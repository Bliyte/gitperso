/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:43:59 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 15:59:02 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	__builtin_printf("%d\n", ft_recursive_factorial(5));
// 	__builtin_printf("%d\n", ft_recursive_factorial(12));
// 	__builtin_printf("%d\n", ft_recursive_factorial(32));
// 	__builtin_printf("%d\n", ft_recursive_factorial(0));
// 	__builtin_printf("%d\n", ft_recursive_factorial(1));
// 	__builtin_printf("%d\n", ft_recursive_factorial(2));
// 	__builtin_printf("%d\n", ft_recursive_factorial(3));
// 	__builtin_printf("%d\n", ft_recursive_factorial(-9));
// 	__builtin_printf("%d\n", ft_recursive_factorial(5821));
// 	return (0);
// }