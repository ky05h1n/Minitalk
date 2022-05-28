/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:31:16 by enja              #+#    #+#             */
/*   Updated: 2022/05/25 22:46:56 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		a;

	g_lemqadem = 0;
	a = 0;
	va_start (args, format);
	while (format[a])
	{
		if (format[a] == '%')
			zy_argscheck(format[++a], args);
		else
			zy_putchar(format[a]);
		if (format[a] == '\0')
			break ;
		a++;
	}
	va_end(args);
	return (g_lemqadem);
}
