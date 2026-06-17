#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = (int *)malloc(sizeof(int) * (max - min));
	if (!res)
		return (NULL);
	i = min - 1;
	while (++i < max)
		res[i - min] = i;
	return (res);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	*test = ft_range(atoi(argv[1]), atoi(argv[2]));
		for (int i = 0; i < (atoi(argv[2]) - atoi(argv[1])); i++)
			printf("%d ", *(test + i));
	}
	else
	{
		int	*test = ft_range(-21, 21);
		for (int i = 0; i < 42; i++)
			printf("%d ", *(test + i));
	}
	return (0);
}*/
