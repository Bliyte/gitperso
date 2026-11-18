/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:16:57 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 13:26:14 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_X(unsigned int n, int *res)
{
	unsigned long	temp;
	char			*hexa;
	char			prhex;

	temp = n;
	hexa = "0123456789ABCDEF";
	if(temp / 16 != 0)
	{
		prhex = hexa[temp % 16];
		temp = temp / 16;
		ft_print_X((temp), &*res);
		write(1, &prhex, 1);
		*res = *res + 1;
		return ;
	}
	prhex = hexa[temp % 16];
	write(1, &prhex, 1);
	*res = *res + 1;
}
