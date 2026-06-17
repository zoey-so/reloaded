/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:39:59 by smilch            #+#    #+#             */
/*   Updated: 2026/05/13 16:40:02 by smilch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*s_cp;

	s_cp = str;
	while (*str++)
		;
	return ((int)(str - s_cp) - 1);
}

/*
#include <string.h>
#include <stdio.h>
void	test(char *str)
{
	printf("\n str = %s\n", str);
	printf("len_org = %d\n", (int)strlen(str));
	printf("len_ft. = %d\n", ft_strlen(str));
}
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_strlen(argv[1]));
	}
	else
	{
		test("123456");
		test("\0ddd");
		test("123\0");
		test("a");
	}
	return (0);
}*/
