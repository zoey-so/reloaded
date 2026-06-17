int	ft_sqrt(int nb)
{
	int	res;
	int	min;
	int	max;

	res = 1;
	min = 0;
	max = 46340;
	if (nb <= 0)
		return (0);
	if (nb / 2 < 46340)
		max = nb / 2;
	else
		min = 304;
	while (min < max)
	{
		res = (max + min) / 2;
		if (res * res == nb)
			return (res);
		else if (res * res < nb)
			min = res + 1;
		else
			max = res - 1;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d", ft_sqrt(atoi(argv[1])));
// 	return (0);
// }
