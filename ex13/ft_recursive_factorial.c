/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:19 by smilch            #+#    #+#             */
/*   Updated: 2026/06/17 16:23:19 by smilch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 13 && nb > 1)
		res *= ft_recursive_factorial(nb - 1);
	else if (nb >= 13 || nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
