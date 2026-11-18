/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:56:49 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 14:07:10 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *format, ...);

int		ft_print_c(char c);
int		ft_print_s(char *str);
void	ft_print_p(void *s, int *res);
void	ft_print_di(int di, int *res);
void	ft_print_u(unsigned int u, int *res);
void	ft_print_x(unsigned int n, int *res);
void	ft_print_X(unsigned int n, int *res);

#endif
