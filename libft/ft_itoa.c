/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:11:26 by ael-azha          #+#    #+#             */
/*   Updated: 2025/04/13 00:11:27 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size++;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	int		is_neg;
	long	nb;
	char	*str;

	size = count_size((long) n);
	str = (char *) malloc(sizeof(char) * size + 1);
	nb = n;
	if (str == NULL)
		return (NULL);
	is_neg = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
		is_neg = 1;
	}
	str[size] = '\0';
	while (size > (size_t) is_neg)
	{
		str[size - 1] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}
