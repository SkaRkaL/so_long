#include "so_long.h"

void	flood_fill(char **map, int x, int y)
{

}

int valid_path(char **map, t_data *v)
{
	t_data *tmp;

	tmp = v;	
	flood_fill(tmp->s, tmp->x, tmp->y);
}
