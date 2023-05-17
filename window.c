#include "so_long.h"

void	*mlx_window(t_data *g_data)
{
	int		w;
	int		h;
	void	*ptr;

	w = g_data->width;
	h = g_data->height;
	ptr = mlx_new_window(g_data->mlx_p, w, h, T);
	if (!ptr)
		exit(write(2, "Error Window\n", 13));
	return (ptr);
}
