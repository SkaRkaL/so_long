/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:05:50 by sakarkal          #+#    #+#             */
/*   Updated: 2023/06/08 00:08:20 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	_collect(t_data *map)
{
	map->c--;
	ft_putstr_fd("Moves : ", 1);
	ft_putnbr(map->moves++);
	write(1, "\n", 1);
}

void	move_p(int keycode, t_data *map)
{
	if (keycode == W || keycode == ARROW_UP)
		up(map);
	else if (keycode == D || keycode == ARROW_RIGHT)
		right(map);
	else if (keycode == S || keycode == ARROW_DOWN)
		down(map);
	else if (keycode == A || keycode == ARROW_LEFT)
		left(map);
}
