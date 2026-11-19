/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:05:31 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/03 14:22:37 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 17;
	int b = 5;
	int div = 0;
	int mod = 0;
	
	ft_div_mod(a,b,&div,&mod);
	__builtin_printf("%d %d", div, mod);
	return (0);
}*/