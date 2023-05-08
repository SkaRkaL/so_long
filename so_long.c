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

int main(int ac, char **av) 
{
	int	fd;
	if (ac != 2)
		return (0);
	if (test_ber(av[1]) == 0)
	{
		exit (write(1, "Error\n", 7));
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ERROR fd\n");
		return (0);
	}
	
	return (0);
}
