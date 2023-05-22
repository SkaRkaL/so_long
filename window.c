#include "so_long.h"

void	*mlx_window(t_data *map)
{
	int		w;
	int		h;
	void	*ptr;

	w = map->width;
	h = map->height;
	if (w > 2624 || h > 1408)
		exit(write(1, "Error\n", 6));
	ptr = mlx_new_window(map->mlx_p, w, h, T);
	if (!ptr)
		exit(write(2, "Error Window\n", 13));
	return (ptr);
}
