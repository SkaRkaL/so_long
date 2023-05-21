#include "so_long.h"

void *xpm_to_image(void *mlx_p, char *xpm)
{
	int wh;
	void *ptr;

	wh = 64;
	ptr = mlx_xpm_file_to_image(mlx_p, xpm, &wh, &wh);
	if (!ptr)
	{
		ft_putstr_fd("mlx_xpm_file_to_image function fails!\n", 2);
		exit(1);
	}
	return (ptr);
}

void ft_load_images(t_data *g_data)
{
	g_data->wall = xpm_to_image(g_data->mlx_p, WALL);
	g_data->space = xpm_to_image(g_data->mlx_p, SP);
	g_data->player = xpm_to_image(g_data->mlx_p, PL);
	g_data->coin = xpm_to_image(g_data->mlx_p, CO);
	if (g_data->c == 0)
		g_data->exit = xpm_to_image(g_data->mlx_p, E_X);
	else
		g_data->exit = xpm_to_image(g_data->mlx_p, EX);
}
