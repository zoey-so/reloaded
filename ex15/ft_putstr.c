void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	ft_putstr("");
	ft_putstr("\0");
	ft_putstr("gsf\tfgf\nj\x03jfd\0kkkk\x03");
	return (0);
}*/
