#include "so_long.h"	

static int	pos_player(char **map, char pos)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' && pos == 'y')
				return (j);
			else if (map[i][j] == 'P' && pos == 'x')
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

void	*ft_xpm2image(void *mlx_p, char *xpm)
{
	int		wh;
	void	*ptr;

	wh = 64;
	ptr = mlx_xpm_file_to_image(mlx_p, xpm, &wh, &wh);
	if (!ptr)
		exit(write(2, "Error xpm file\n", 17));
	return (ptr);
}

void	ft_load_images(t_data *g_data)
{
	g_data->wall = ft_xpm2image(g_data->mlx_p, WALL);
	g_data->space = ft_xpm2image(g_data->mlx_p, SP);
	g_data->coin = ft_xpm2image(g_data->mlx_p, CO);
	g_data->player = ft_xpm2image(g_data->mlx_p, PL);
	if (g_data->c > 0)
		g_data->exit = ft_xpm2image(g_data->mlx_p, EX);
}

void	ft_struct_initializer(t_data *map)
{
	int	wh;

	wh = 64;
	map->wh = wh;
	map->height = row_size(map->s) * 64;
	map->width = (ft_strlen(map->s[0]) - 1) * 64;
	map->mlx_p = mlx_init();
	if (!map->mlx_p)
	{
		ft_putstr_fd("mlx_init Error\n", 2);
		exit(1);
	}
	map->mlx_wind = mlx_window(map);
	map->pos_x = pos_player(map->s, 'x');
	map->pos_y = pos_player(map->s, 'y');
	map->moves = 0;
	ft_load_images(map);
}
