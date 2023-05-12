#include "so_long.h"

static int check_len(int *i, int len, char **map)
{
	*i = 0;
	while (map[*i])
	{
		if (len != ft_strlen(map[*i]))
			return (0);
		*i += 1;
	}
	return (1);
}

static int check_line(char **map, int i)
{
	int tmp_i;

	tmp_i = 0;
	while (map[0][tmp_i] == '1' && map[i - 1][tmp_i] == '1')
		tmp_i++;
	return (tmp_i);
}

static int check_space(char **map, int len)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

static int check_p_c_e(char **map)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'C' && map[i][j] != 'P' && map[i][j] != 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	map_check(t_data *map)
{
	int	i;

	if (!map)
		return (0);
	map->col = ft_strlen(map->s[0]);
	if (check_len(&i, map->col, map->s) == 0)
		return (0);
	if (check_line(map->s, i) != map->col)
		return (0);
	if (check_space(map->s, map->col) == 0)
		return (0);
	if (check_p_c_e(map->s) == 0)
		return (0);
	if (__find(map->s, map) == 0)
		return (0);
	get_p_pos(map->s, map);
	// if (valid_path(map, map) == 0)
	// 	return (0);
	return (1);
}
