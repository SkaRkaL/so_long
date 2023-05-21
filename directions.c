#include "so_long.h"

void	up(t_data *map)
{
	if (map->s[map->pos_x - 1][map->pos_y] == '0')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[--map->pos_x][map->pos_y] = 'P';
		ft_putstr_fd("Moves : ", 1);
		ft_putnbr(map->moves++);
		write(1, "\n", 1);
	}
	else if (map->s[map->pos_x - 1][map->pos_y] == 'C')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[--map->pos_x][map->pos_y] = 'P';
		_collect(map);
	}
	else if (map->s[map->pos_x - 1][map->pos_y] == 'E')
		game_over(map);
}

void	right(t_data *map)
{
	if (map->s[map->pos_x][map->pos_y + 1] == '0')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[map->pos_x][++map->pos_y] = 'P';
		ft_putstr_fd("Moves : ", 1);
		ft_putnbr(map->moves++);
		write(1, "\n", 1);
	}
	else if (map->s[map->pos_x][map->pos_y + 1] == 'C')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[map->pos_x][++map->pos_y] = 'P';
		_collect(map);
	}
	else if (map->s[map->pos_x][map->pos_y + 1] == 'E')
		game_over(map);
}

void	left(t_data *map)
{
	if (map->s[map->pos_x][map->pos_y - 1] == '0')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[map->pos_x][--map->pos_y] = 'P';
		ft_putstr_fd("Moves : ", 1);
		ft_putnbr(map->moves++);
		write(1, "\n", 1);
	}
	else if (map->s[map->pos_x][map->pos_y - 1] == 'C')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[map->pos_x][--map->pos_y] = 'P';
		_collect(map);
	}
	else if (map->s[map->pos_x][map->pos_y - 1] == 'E')
		game_over(map);
}

void	down(t_data *map)
{
	if (map->s[map->pos_x + 1][map->pos_y] == '0')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[++map->pos_x][map->pos_y] = 'P';
		ft_putstr_fd("Moves : ", 1);
		ft_putnbr(map->moves++);
		write(1, "\n", 1);
	}
	else if (map->s[map->pos_x + 1][map->pos_y] == 'C')
	{
		map->s[map->pos_x][map->pos_y] = '0';
		map->s[++map->pos_x][map->pos_y] = 'P';
		_collect(map);
	}
	else if (map->s[map->pos_x + 1][map->pos_y] == 'E')
		game_over(map);
}
