#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_var{
	char	**s;
	int		p;
	int		c;
	int		e;
	int		t;
	int		w;
	int		i;
	int		y;
	int		collect;
}		t_var;

//---------------------------------------
int		map_check(char **map);
int		test_newline(char *line);
int		__find(char	**map);
//---------------------------------------
char	*gnl(int fd, char *tr);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
//---------------------------------------

int		ft_strlen(char *s);
char	*ft_substr(char *s, unsigned int start, int len);
int		ft_strlcpy(char *dst, char *src, int dstsize);
char	**ft_split(char *str, char c);
char	*ft_strdup(char *s1);

#endif