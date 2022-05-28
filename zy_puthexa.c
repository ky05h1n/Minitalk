/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zy_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:58:00 by enja              #+#    #+#             */
/*   Updated: 2021/12/14 17:23:30 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	zy_checkupper(int a, char x)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (x == 'X' && tab[a] >= 'a' && tab[a] <= 'f')
		return (tab[a] - 32);
	else
		return (tab[a]);
}

void	zy_puthexa(unsigned long n, char c)
{
	int		bdx;
	int		a;
	char	s[30];

	bdx = 0;
	while (n >= 16)
	{
		a = n % 16;
		n = n / 16;
		s[bdx++] = zy_checkupper(a, c);
	}
	s[bdx++] = zy_checkupper(n, c);
	s[bdx--] = '\0';
	while (bdx >= 0)
		zy_putchar(s[bdx--]);
}
