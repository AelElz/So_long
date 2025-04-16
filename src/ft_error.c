/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:26:46 by ael-azha          #+#    #+#             */
/*   Updated: 2025/04/16 20:09:52 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_pterr(int error_code)
{
	if (error_code == 0)
		ft_putstr_fd("Error :  enter file name\n", 2);
	else if (error_code == 1)
		ft_putstr_fd("Error : file not '.ber'\n", 2);
	else if (error_code == 2)
		ft_putstr_fd("Error : no file exist, or map size not valid\n", 2);
	else if (error_code == 3)
		ft_putstr_fd("Error : something wrong with P/E/C charcters\n", 2);
	else if (error_code == 4)
		ft_putstr_fd("Error : invalid 2D map\n", 2);
	else
		ft_putstr_fd("Error : indefine error\n", 2);
}
