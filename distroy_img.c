/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distroy_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:00:56 by sakarkal          #+#    #+#             */
/*   Updated: 2023/05/29 00:01:09 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_data *map)
{
	ft_putstr_fd(" \t ......... ", 1);
	ft_putstr_fd("\n\t| You OUT |\n", 1);
	ft_putstr_fd(" \t '''''''''\n", 1);
	mlx_destroy_window(map->mlx_p, map->mlx_wind);
	exit(0);
}

void	ft_destory_images(t_data *map)
{
	mlx_destroy_image(map->mlx_p, map->wall);
	mlx_destroy_image(map->mlx_p, map->space);
	mlx_destroy_image(map->mlx_p, map->player);
	mlx_destroy_image(map->mlx_p, map->coin);
	mlx_destroy_image(map->mlx_p, map->exit);
}
