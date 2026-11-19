/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrenaul <clrenaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:51:43 by clrenaul          #+#    #+#             */
/*   Updated: 2026/11/05 11:15:51 by clrenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	verif_argc(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		fd;
	ssize_t	ret;
	char	buf[4096];

	if (verif_argc(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ret = read(fd, buf, sizeof(buf));
	while (ret > 0)
	{
		write (1, buf, ret);
		ret = read(fd, buf, sizeof(buf));
	}
	close (fd);
	return (0);
}
