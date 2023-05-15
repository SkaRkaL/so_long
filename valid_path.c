#include "so_long.h"

void replaceCharacters(char **map, int row, int col) 
{
    if (map[row][col] == 'C' || map[row][col] == 'E' || map[row][col] == 'P')
	{
        if (map[row][col] != '1')
            map[row][col] = 'D';
        else
            return ;
    }
	else
	{
        return ;
    }

    // Replace character to the left
    replaceCharacters(map, row, col - 1);
    // Replace character to the right
    replaceCharacters(map, row, col + 1);
    // Replace character above
    replaceCharacters(map, row - 1, col);
    // Replace character below
    replaceCharacters(map, row + 1, col);
}

int	valid_path(t_data *v)
{
	t_data	*tmp;

	tmp = v;
	replaceCharacters(tmp->s, 0, 0);
	for (int i = 0; tmp->s[i]; i++)
	{
		printf("%s\n", tmp->s[i]);
	}
	exit(1);
	return (1);
}
