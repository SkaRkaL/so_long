#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>

int		ft_strlen(char *s);
void	ft_putstr(char *str);
char	*gnl(int fd, char *tr);


#endif