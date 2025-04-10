/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:55:01 by ael-azha          #+#    #+#             */
/*   Updated: 2025/04/10 20:55:03 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_close(t_game *game)
{
	cleanup_game(game);
	return (0);
}

void	exit_with_cleanup(t_game *game, char *error_message)
{
	ft_printf("Error: %s\n", error_message);
	cleanup_game2(game);
	exit(1);
}

void	init_null(t_game *game)
{
	game->textures[0] = NULL;
	game->textures[1] = NULL;
	game->textures[2] = NULL;
	game->textures[3] = NULL;
	game->textures[4] = NULL;
}
