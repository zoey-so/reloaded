int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			while (*argv[i])
				ft_putchar(*argv[i]++);
			ft_putchar('\n');
		}
	}
	return (0);
}
