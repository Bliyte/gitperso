/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:22:10 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 10:50:12 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*#include <unistd.h>

void    ft_putchar(int c)
{
    write (1, &c, 1);
}*/

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

/*int main(void)
{
    ft_print_alphabet();
    return (0);
}*/