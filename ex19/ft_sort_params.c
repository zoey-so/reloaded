#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}

int	pivot_swap(char **argv, int l, int r)
{
	int		i;
	int		j;
	char	*p;
	char	*swap;

	p = argv[r];
	i = l - 1;
	j = l;
	while (j < r)
	{
		if (ft_strcmp(argv[j], p) < 0)
		{
			i++;
			swap = argv[i];
			argv[i] = argv[j];
			argv[j] = swap;
		}
		j++;
	}
	swap = argv[i + 1];
	argv[i + 1] = argv[r];
	argv[r] = swap;
	return (i + 1);
}

void	q_sort(char **argv, int l, int r)
{
	int	p;

	if (l < r)
	{
		p = pivot_swap(argv, l, r);
		q_sort(argv, l, p - 1);
		q_sort(argv, p + 1, r);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
		q_sort(argv, 1, argc - 1);
	while (++i < argc)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
