/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:07:08 by sakarkal          #+#    #+#             */
/*   Updated: 2023/06/08 00:06:05 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	test_ber(char *av)
{
	int	i;

	i = ft_strlen(av);
	if (i < 5)
		return (0);
	if (av[i - 1] != 'r' || av[i - 2] != 'e' || \
		av[i - 3] != 'b' || av[i - 4] != '.')
		return (0);
	return (1);
}

static int	ft_hook(int keycode, t_data *map)
{
	if (keycode == 53)
		ft_close(map);
	if (keycode == A || keycode == D || keycode == S || keycode == W || \
		keycode == ARROW_RIGHT || keycode == ARROW_LEFT || \
		keycode == ARROW_UP || keycode == ARROW_DOWN)
	{
		ft_destory_images(map);
		move_p(keycode, map);
		ft_load_images(map);
		draw_textures(map);
	}
	return (1);
}

void	parsing(char *str, t_data *var, char *line, int fd)
{
	if (test_ber(str) == 0)
	{
		exit(write(2, "Error\n", 7));
	}
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("ERROR fd\n", 2);
		exit(1);
	}
	var->s = ft_split(gnl(fd, line), '\n');
	if (var->s == NULL)
	{
		ft_putstr_fd("ERROR_MAP\n", 2);
		exit(1);
	}
	if (test_newline(line) == 0 || map_check(var) == 0)
	{
		ft_putstr_fd("ERROR_MAP <->\n", 2);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	int		fd;
	char	line[999999];
	t_data	var;

	if (ac != 2)
		return (0);
	fd = 0;
	parsing(av[1], &var, line, fd);
	var.moves = 1;
	ft_struct_initializer(&var);
	draw_textures(&var);
	mlx_hook(var.mlx_wind, KEYPRESS, 0, ft_hook, &var);
	mlx_hook(var.mlx_wind, CLOSE_BTN, 0, ft_close, &var);
	mlx_loop(var.mlx_p);
	check_isfree(var.s);
	return (0);
}
