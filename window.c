/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:16:23 by sakarkal          #+#    #+#             */
/*   Updated: 2023/05/29 00:16:26 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*mlx_window(t_data *map)
{
	int		w;
	int		h;
	void	*ptr;

	w = map->width;
	h = map->height;
	ptr = mlx_new_window(map->mlx_p, w, h, T);
	if (!ptr)
		exit(write(2, "Error Window\n", 13));
	return (ptr);
}
