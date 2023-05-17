#include "so_long.h"

int	test_ber(char *av)
{
	int	i;

	i = ft_strlen(av);
	if (i < 5)
		return (0);
	if (av[i - 1] != 'r' || av[i - 2] != 'e' || av[i - 3] != 'b' || av[i - 4] != '.')
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int		fd;
	char	line[9999];
	t_data	v;

	if (ac != 2)
		return (0);
	if (test_ber(av[1]) == 0)
	{
		exit(write(2, "Error\n", 7));
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("ERROR fd\n", 2);
		return (1);
	}
	v.s = ft_split(gnl(fd, line), '\n');
	if (v.s == NULL)
	{
		ft_putstr_fd("ERROR_MAP\n", 2);
		return (1);
	}
	if (test_newline(line) == 0 || map_check(&v) == 0)
	{
		ft_putstr_fd("ERROR_MAP\n", 2);
		return (1);
	}
	// v.mlx = mlx_init();
	// printf("[[[[[  %d  ]]]]]\n", v.c);
	// exit(1);
	ft_struct_initializer(&v);
	for (int i = 0; v.s[i]; i++)
	{
		printf("> %s\n", v.s[i]);
	}
	return (0);
}
