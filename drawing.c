#include "so_long.h"

int	__image(t_data *map, int x, int y, void *img)
{
	void	*mp;
	void	*wp;

	mp = map->mlx_p;
	wp = map->mlx_wind;
	return (mlx_put_image_to_window(mp, wp, img, x, y));
}

void	draw_textures(t_data *map)
{
	int	x;
	int	y;

	x = 0;
	while (map->s[x])
	{
		y = 0;
		while (map->s[x][y])
		{
			if (map->s[x][y] == '1')
				__image(map, x * 64, y * 64, map->wall);
			else if (map->s[x][y] == '0')
				__image(map, x * 64, y * 64, map->space);
			else if (map->s[x][y] == 'P')
				__image(map, x * 64, y * 64, map->player);
			else if (map->s[x][y] == 'C')
				__image(map, x * 64, y * 64, map->coin);
			else if (map->s[x][y] == 'E')
				__image(map, x * 64, y * 64, map->exit);
			y++;
		}
		x++;
	}
}