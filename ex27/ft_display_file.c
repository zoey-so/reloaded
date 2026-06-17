/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:20 by smilch            #+#    #+#             */
/*   Updated: 2026/06/17 16:23:20 by smilch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		returned;
	char	buf[4096];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
		returned = read(fd, buf, 4096);
		while (returned > 0)
		{
			write(1, buf, returned);
			returned = read(fd, buf, 4096);
		}
		close(fd);
	}
	return (0);
}
