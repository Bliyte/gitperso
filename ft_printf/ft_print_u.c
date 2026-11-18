/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:56:02 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 13:40:37 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_u(unsigned int u, int *res)
{
	char				c;
	unsigned long int	d;

	d = u;
	if(d / 10 != 0)
		ft_print_u(d/10, &*res);
	c = (d % 10) + '0';
	write(1, &c, 1);
	*res = *res + 1;
}
