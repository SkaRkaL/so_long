/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:00:04 by sakarkal          #+#    #+#             */
/*   Updated: 2023/06/07 22:59:12 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	test_newline(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	if (line[0] == '\n' || line[ft_strlen(line) - 1] == '\n')
		return (0);
	while (line[i])
	{
		if (line[i] == '\n' && line[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}
