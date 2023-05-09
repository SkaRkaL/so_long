#include "so_long.h"

int	test_newline(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
	{
		if (line[i] == '\n' && line[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}

