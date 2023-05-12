#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_var
{
	char	**s;
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
	int		collect;
} t_data;

//---------------------------------------
int		map_check(t_data *map);
int		test_newline(char *line);
int		__find(char **map, t_data *v);
void	get_p_pos(char **map, t_data *pos);
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
