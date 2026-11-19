/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:16:43 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/17 11:13:11 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_char(long int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	if (n % 10 > 0)
		i++;
	if (sign == -1)
		i++;
	return (i);
}

static char	*if_minus(char *res, long int n, int i)
{
	n = n * -1;
	while (i > 1)
	{
		res[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	res[i] = (n % 10) + '0';
	i--;
	res[i] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*res;
	long int	longn;

	longn = n;
	i = count_char(longn);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	i--;
	if (longn >= 0)
	{
		while (i > 0)
		{
			res[i] = ((longn % 10) + '0');
			longn = longn / 10;
			i--;
		}
		res[i] = (longn % 10) + '0';
	}
	else
		res = if_minus(res, longn, i);
	return (res);
}
