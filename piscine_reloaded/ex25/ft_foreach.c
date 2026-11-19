/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:07:44 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/04 16:43:19 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void	print_int(int n)
{
	printf("%d\n", n);
}

void	print_double(int n)
{
	printf("%d\n", n * 2);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	vide[1] = {0};

	printf("--- print_int ---\n");
	ft_foreach(tab, 5, &print_int);
	printf("--- print_double ---\n");
	ft_foreach(tab, 5, &print_double);
	printf("--- length 0 (rien ne doit s'afficher) ---\n");
	ft_foreach(vide, 0, &print_int);
	return (0);
}*/