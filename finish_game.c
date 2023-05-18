#include "so_long.h"

void	ft_finish_game(t_data *map)
{
	if (map->c == 0)
	{
		mlx_destroy_window(map->mlx_p, map->mlx_wind);
		printf("The game is finished, you win!");
		exit(0);
	}
}