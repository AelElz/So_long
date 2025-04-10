/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:54:38 by ael-azha          #+#    #+#             */
/*   Updated: 2025/04/10 20:54:38 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_puthexa(unsigned long n, char x);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
#endif
