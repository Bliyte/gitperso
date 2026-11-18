/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:08:38 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 14:04:59 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	search_type(const char *format, int i, va_list *ap)
{
	int	res;

	res = 0;
	if(format[i + 1] == 'c')
		res = ft_print_c(va_arg(*ap, int));
	if(format[i + 1] == 's')
		res = ft_print_s(va_arg(*ap, char *));
	if(format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_print_di(va_arg(*ap, int), &res);
	if(format[i + 1] == 'u')
		ft_print_u(va_arg(*ap, unsigned int), &res);
	if(format[i + 1] == 'x')
		ft_print_x(va_arg(*ap, unsigned int), &res);
	if(format[i + 1] == 'X')
		ft_print_X(va_arg(*ap, unsigned int), &res);
	if(format[i + 1] == 'p')
		ft_print_p(va_arg(*ap, void *), &res);
	if(format[i + 1] == '%')
	{
		write(1, "%", 1);
		res++;
	}
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(ap, format);
	while(format[i])
	{
		if(format[i] == '%')
		{
			res = res + search_type(format, i, &ap);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			res++;
		}
		i++;
	}
	va_end(ap);
	return(res);
}

// int	main(void)
// {
// 	int		ess;
// 	int		ess1;
// 	char	*test = "Bonjour";

// 	ess = ft_printf("%s %i\n", test, 256);
// 	ft_printf("%d\n", ess);
// 	ess1 = __builtin_printf("%s %i\n", test, 256);
// 	__builtin_printf("%d", ess1);
// 	return(0);
// }
