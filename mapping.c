/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:04:27 by sakarkal          #+#    #+#             */
/*   Updated: 2023/06/08 00:00:02 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_check(t_data *map)
{
	int		i;
	char	**tmp;

	i = 0;
	if (!map)
		return (0);
	tmp = (char **)malloc(sizeof(char *) * (row_size(map->s) + 1));
	if (tmp == NULL)
		return (0);
	while (map->s[i])
	{
		tmp[i] = ft_substr(map->s[i], 0, ft_strlen(map->s[0]));
		i++;
	}
	tmp[i] = NULL;
	i = 0;
	map->col = ft_strlen(map->s[0]);
	if (map_checker(&i, map) == 0)
		return (check_isfree(tmp), 0);
	get_p_pos(map->s, map);
	valid_path(map, tmp);
	return (1);
}
