/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:08:16 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 15:15:15 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_p(void *s, int *res)
{
	unsigned long	temp;
	char			*hexa;
	char			prhex;

	temp = (unsigned long)s;
	hexa = "0123456789abcdef";
	if(s == NULL)
	{
		write(1, "(nil)", 5);
		*res = 5;
		return ;
	}
	if(temp / 16 != 0)
	{
		prhex = hexa[temp % 16];
		temp = temp / 16;
		ft_print_p(((void *)temp), &*res);
		write(1, &prhex, 1);
		*res += 1;
		return ;
	}
	if(temp / 16 == 0)
		write(1, "0x", 2);
	prhex = hexa[temp % 16];
	write(1, &prhex, 1);
	*res = *res + 3;
}
