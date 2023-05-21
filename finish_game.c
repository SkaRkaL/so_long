#include "so_long.h"

void	game_over(t_data *map)
{
	if (map->c == 0)
	{
		mlx_destroy_window(map->mlx_p, map->mlx_wind);
		ft_putstr_fd(" \t .............. ", 1);
		ft_putstr_fd("\n\t{ YOU GOT IT ✅}\n", 1);
		ft_putstr_fd(" \t '''''''''''''' \n", 1);
		exit(0);
	}
}
