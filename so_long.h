/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:09:26 by sakarkal          #+#    #+#             */
/*   Updated: 2023/05/29 00:09:27 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

# define KEYPRESS 2
# define CLOSE_BTN 17

# define A 0
# define S 1
# define D 2
# define W 13

# define ARROW_UP 126
# define ARROW_DOWN 125
# define ARROW_LEFT 123
# define ARROW_RIGHT 124

# define CO "textures/coin.xpm"
# define EX "textures/Dor.xpm"
# define E_X "textures/Exit.xpm"
# define PL "textures/ghost.xpm"
# define SP "textures/space.xpm"
# define WALL "textures/wall.xpm"
# define T "so_long"

typedef struct s_var
{
	char	**s;
	void	*mlx_p;
	void	*wall;
	void	*player;
	void	*space;
	void	*exit;
	void	*coin;
	void	*mlx_wind;
	int		wh;
	int		p;
	int		c;
	int		e;
	int		col;
	int		row;
	int		x;
	int		y;
	int		height;
	int		width;
	int		pos_x;
	int		pos_y;
	int		moves;
}			t_data;

//---------------------------------------
void	ft_putnbr(int n);
int		map_check(t_data *map);
int		test_newline(char *line);
int		__find(char **map, t_data *v);
void	get_p_pos(char **map, t_data *pos);
void	valid_path(t_data *v, char **map);
int		row_size(char **tab);
void	*check_isfree(char **str);
void	ft_struct_initializer(t_data *map);
void	*mlx_window(t_data *map);
void	draw_textures(t_data *map);
int		ft_close(t_data *map);
void	ft_destory_images(t_data *map);
void	ft_load_images(t_data *g_data);
void	game_over(t_data *map);
void	move_p(int keycode, t_data *map);
//---------------------------------------

//---------------------------------------
char	*gnl(int fd, char *tr);
void	_collect(t_data *map);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
//---------------------------------------

//---------------------------------------
void	up(t_data *map);
void	down(t_data *map);
void	right(t_data *map);
void	left(t_data *map);
//---------------------------------------

//---------------------------------------
int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
int		ft_strlcpy(char *dst, char *src, int dstsize);
char	**ft_split(char *str, char c);
char	*ft_strdup(char *s1);
//---------------------------------------

#endif
