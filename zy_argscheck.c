/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zy_argscheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:40:34 by enja              #+#    #+#             */
/*   Updated: 2021/12/14 19:29:24 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	zy_argscheck(char format, va_list args)
{
	if (format == '%')
		zy_putchar('%');
	else if (format == 'u')
		zy_putnbr(va_arg(args, unsigned int));
	else if (format == 'i' || format == 'd')
		zy_putnbr(va_arg(args, int));
	else if (format == 'c')
		zy_putchar(va_arg(args, int));
	else if (format == 's')
		zy_putstr(va_arg(args, char *));
	else if (format == 'x' || format == 'X')
		zy_puthexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
	{
		zy_putstr("0x");
		zy_puthexa(va_arg(args, unsigned long), format);
	}
}
