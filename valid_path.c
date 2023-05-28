/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:11:39 by sakarkal          #+#    #+#             */
/*   Updated: 2023/05/29 00:16:15 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	row_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_flood_fill(char **map, int x, int y)
{
	if (y < 0 || y >= ft_strlen(map[0]) || x < 0 || \
			x >= row_size(map) || map[x][y] == '1' || \
			map[x][y] == 'F' || map[x][y] == 'E')
		return ;
	if (map[x][y] != 'P')
		map[x][y] = 'F';
	ft_flood_fill(map, x - 1, y);
	ft_flood_fill(map, x + 1, y);
	ft_flood_fill(map, x, y - 1);
	ft_flood_fill(map, x, y + 1);
}

void	ft_check_validpath(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if ((map[i][j] == 'C') || (map[i][j] == 'E' && \
				map[i - 1][j] != 'F' && map[i + 1][j] != 'F' && \
				map[i][j - 1] != 'F' && map[i][j + 1] != 'F'))
			{
				ft_putstr_fd("ERROR Valid_Path\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
	check_isfree(map);
}

void	valid_path(t_data *v, char **map)
{
	ft_flood_fill(map, v->x, v->y);
	ft_check_validpath(map);
}
