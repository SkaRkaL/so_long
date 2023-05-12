#include "so_long.h"

void	get_p_pos(char **map, t_data *pos)
{
	int x = 0;
	int y;
	while(map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'P')
			{
				pos->x = x;
				pos->y = y;
				return ;
			}
			y++;
		}
		x++;
	}
}
