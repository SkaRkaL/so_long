/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:02:23 by sakarkal          #+#    #+#             */
/*   Updated: 2023/06/08 00:07:59 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_over(t_data *map)
{
	if (map->c == 0)
	{
		mlx_destroy_window(map->mlx_p, map->mlx_wind);
		ft_putstr_fd(" \t .............. ", 1);
		ft_putstr_fd("\n\t{ YOU GOT IT ✅}\n", 1);
		ft_putstr_fd(" \t '''''''''''''' \n", 1);
		exit(0);
	}
}
