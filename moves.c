#include "so_long.h"

static void	ft_moveleft(t_data *map)
{
	if (map->s[map->pos_y][map->pos_x - 1] == '0')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[map->pos_y][--map->pos_x] = 'P';
		printf("Move Number: %d\n", ++map->moves);
	}
	else if (map->s[map->pos_y][map->pos_x - 1] == 'C')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[map->pos_y][--map->pos_x] = 'P';
		ft_collect(map);
	}
	else if (map->s[map->pos_y][map->pos_x - 1] == 'E')
		ft_finish_game(map);
}

void	ft_collect(t_data *map)
{
	map->c--;
	printf("Move Number: %d\n", ++map->moves);
	printf("Collected!\n");
}

static void	ft_moveright(t_data *map)
{
	if (map->s[map->pos_y][map->pos_x + 1] == '0')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[map->pos_y][++map->pos_x] = 'P';
		printf("Move Number: %d\n", ++map->moves);
	}
	else if (map->s[map->pos_y][map->pos_x + 1] == 'C')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[map->pos_y][++map->pos_x] = 'P';
		ft_collect(map);
	}
	else if (map->s[map->pos_y][map->pos_x + 1] == 'E')
		ft_finish_game(map);
}

static void	ft_movedown(t_data *map)
{
	if (map->s[map->pos_y + 1][map->pos_x] == '0')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[++map->pos_y][map->pos_x] = 'P';
		printf("Move Number: %d\n", ++map->moves);
	}
	else if (map->s[map->pos_y + 1][map->pos_x] == 'C')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[++map->pos_y][map->pos_x] = 'P';
		ft_collect(map);
	}
	else if (map->s[map->pos_y + 1][map->pos_x] == 'E')
		ft_finish_game(map);
}

static void	ft_moveup(t_data *map)
{
	if (map->s[map->pos_y - 1][map->pos_x] == '0')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[--map->pos_y][map->pos_x] = 'P';
		printf("Move Number: %d\n", ++map->moves);
	}
	else if (map->s[map->pos_y - 1][map->pos_x] == 'C')
	{
		map->s[map->pos_y][map->pos_x] = '0';
		map->s[--map->pos_y][map->pos_x] = 'P';
		ft_collect(map);
	}
	else if (map->s[map->pos_y - 1][map->pos_x] == 'E')
		ft_finish_game(map);
}

void	ft_move_player(int keycode, t_data *map)
{
	if (keycode == A || keycode == ARROW_LEFT)
		ft_moveleft(map);
	else if (keycode == D || keycode == ARROW_RIGHT)
		ft_moveright(map);
	else if (keycode == S || keycode == ARROW_DOWN)
		ft_movedown(map);
	else if (keycode == W || keycode == ARROW_UP)
		ft_moveup(map);
}