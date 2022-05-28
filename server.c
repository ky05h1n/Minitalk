/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:36:38 by enja              #+#    #+#             */
/*   Updated: 2022/05/25 23:06:55 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int sig)
{
	static char	character = 0;
	static int	c_bit = 7;

	if (sig == SIGUSR1)
	{
		character |= 1 << c_bit;
	}
	c_bit--;
	if (c_bit < 0)
	{
		write(1, &character, 1);
		c_bit = 7;
		character = 0;
	}
	return ;
}

int	main(void)
{
	int	pid;

	pid = getpid();
	if (!pid)
		printf("Error couldn't get the PID");
	ft_printf("%d\n", pid);
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		;
}
