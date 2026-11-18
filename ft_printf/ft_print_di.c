/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:38:16 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 13:37:51 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_di(int di, int *res)
{
	char		c;
	long int	d;

	d = di;
	if(d < 0)
	{
		d = -d;
		write(1, "-", 1);
		*res = *res + 1;
	}
	if(d / 10 != 0)
	{
		ft_print_di((d/10), &*res);
	}
	c = (d % 10) + '0';
	write(1, &c, 1);
	*res = *res + 1;
}
