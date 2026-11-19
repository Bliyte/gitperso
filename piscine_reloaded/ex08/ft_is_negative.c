/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:17:32 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 10:51:38 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar(78);
	else
		ft_putchar(80);
}

/*int main (void)
{
    ft_is_negative(4);
    ft_is_negative(0);
    ft_is_negative(-2);
    return (0);
}*/