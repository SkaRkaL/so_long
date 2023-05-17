#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

# define CO "textures/coin.xpm"
# define EX "textures/Dor.xpm"
# define PL "textures/ghost.xpm"
# define SP "textures/space.xpm"
# define WALL "textures/wall.xpm"
# define T "so_long"

typedef struct s_var
{
	char	**s;
	void	*mlx;
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
	int		col;
	int		row;
	int		e;
	int		t;
	int		w;
	int		i;
	int		x;
	int		y;
	int		height;
	int		width;
	int		nb_coin;
	int		pos_x;
	int		pos_y;
	int		moves;
} t_data;

//---------------------------------------
int		map_check(t_data *map);
int		test_newline(char *line);
int		__find(char **map, t_data *v);
void	get_p_pos(char **map, t_data *pos);
void	valid_path(t_data *v, char **map);
int		row_size(char **tab);
void	ft_struct_initializer(t_data *map);
void	*mlx_window(t_data *g_data);
//---------------------------------------
char	*gnl(int fd, char *tr);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
//---------------------------------------

int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
int		ft_strlcpy(char *dst, char *src, int dstsize);
char	**ft_split(char *str, char c);
char	*ft_strdup(char *s1);

#endif