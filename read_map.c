/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:55:38 by ael-azha          #+#    #+#             */
/*   Updated: 2025/04/10 20:55:40 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_realloc(char **map, int *capacity)
{
	int		old_capacity;
	char	**new_map;

	old_capacity = *capacity;
	*capacity *= 2;
	new_map = malloc(sizeof(char *) * (*capacity + 1));
	ft_memmove(new_map, map, sizeof(char *) * old_capacity);
	free(map);
	return (new_map);
}

char	**read_map(const char *filename)
{
	int		fd;
	char	*line;
	char	**map;
	int		i;
	int		capacity;

	capacity = 16;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (perror("Error opening file"), NULL);
	map = malloc(sizeof(char *) * (capacity + 1));
	if (!map)
		return (close(fd), NULL);
	i = 0;
	line = get_next_line(fd);
	while (line)
	{
		map[i++] = line;
		if (i == capacity)
			map = ft_realloc(map, &capacity);
		line = get_next_line(fd);
	}
	map[i] = NULL;
	close(fd);
	return (map);
}

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
