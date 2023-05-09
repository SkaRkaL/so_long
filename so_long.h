#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_var{
	char	**s;
	int		t;
	int		w;
	int		i;
	int		y;
	int		prev;
	int		ind_i;
	int		ind_j;
	int		tb_y;
	int		tb_z;
	int		tb_i;
	int		tb_j;
	int		collect;
	int		moves;
	int		width;
	int		height;
	int		wid;
	int		hei;
}		t_var;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 11
# endif

int		ft_strlen(char *s);
void	ft_putstr(char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(char *s);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	**ft_split(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_search(char *str, int c);
char	*get_next_line(int fd);

#endif