/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:01:22 by sakarkal          #+#    #+#             */
/*   Updated: 2023/05/29 00:01:43 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	__image(t_data *map, int x, int y, void *img)
{
	void	*mp;
	void	*wp;

	mp = map->mlx_p;
	wp = map->mlx_wind;
	return (mlx_put_image_to_window(mp, wp, img, x, y));
}

void	draw_textures(t_data *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->s[y])
	{
		x = 0;
		while (map->s[y][x])
		{
			if (map->s[y][x] == '1')
				__image(map, x * 64, y * 64, map->wall);
			else if (map->s[y][x] == '0')
				__image(map, x * 64, y * 64, map->space);
			else if (map->s[y][x] == 'P')
				__image(map, x * 64, y * 64, map->player);
			else if (map->s[y][x] == 'C')
				__image(map, x * 64, y * 64, map->coin);
			else if (map->s[y][x] == 'E')
				__image(map, x * 64, y * 64, map->exit);
			x++;
		}
		y++;
	}
}
