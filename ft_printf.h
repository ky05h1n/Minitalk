/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:50:36 by enja              #+#    #+#             */
/*   Updated: 2021/12/14 19:13:14 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		g_lemqadem;
void	zy_puthexa(unsigned long n, char c);
void	zy_argscheck(char format, va_list(args));
void	zy_putchar(char c);
void	zy_putstr(char *str);
void	zy_putnbru(unsigned int n);
void	zy_putnbr(long long n);
int		ft_printf(const char *format, ...);

#endif