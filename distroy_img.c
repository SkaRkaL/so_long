#include "so_long.h"

int	ft_close(t_data *map)
{
	mlx_destroy_window(map->mlx_p, map->mlx_wind);
	exit(0);
}

void	ft_destory_images(t_data *map)
{
	mlx_destroy_image(map->mlx_p, map->wall);
	mlx_destroy_image(map->mlx_p, map->space);
	mlx_destroy_image(map->mlx_p, map->player);
	mlx_destroy_image(map->mlx_p, map->coin);
	mlx_destroy_image(map->mlx_p, map->exit);
}
