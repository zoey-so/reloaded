int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0 && nb < 13)
	{
		while (nb)
			res *= nb--;
		return (res);
	}
	else if (nb == 0)
		return (res);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}*/
