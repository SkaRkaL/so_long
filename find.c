#include "so_long.h"

int __find(char	**map, t_data *v)
{
	int	i;
	int	j;

	i = -1;
	v->c = 0;
	v->e = 0;
	v->p = 0;
	while(map[++i])
	{
		j = 0;
		while(map[i][j])
		{
			if (map[i][j] == 'C')
				v->c++;
			if (map[i][j] == 'P')
				v->p++;
			if (map[i][j] == 'E')
				v->e++;
			j++;
		}
	}
	if(v->c == 0 || v->p != 1 || v->e != 1)
		return (0);
	return (1);
}
