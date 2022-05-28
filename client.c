/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:43:15 by enja              #+#    #+#             */
/*   Updated: 2022/05/25 23:43:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	value;
	int	range;

	sign = 1;
	value = 0;
	range = 0;
	while ((*str == ' ' || *str == '\f') || (*str == '\n' || *str == '\r')
		|| (*str == '\t' || *str == '\v'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
		range++;
		if (range >= 20 && sign == -1)
			return (0);
		if (range >= 20 && sign == 1)
			return (-1);
	}
	return (value * sign);
}

void	check_argument(char *av)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (av[a])
		a++;
	if (a < 3 || a > 5)
	{
		ft_printf("Check ur PID it should contains only numeric characters, ");
		ft_printf("please Note that on MacOs the max and min ");
		ft_printf("process ID are the following :\n");
		ft_printf("Min PID is : 100\nMax is : 99998\n");
		exit(1);
	}
	while (av[b])
	{
		if (av[b] < '0' || av[b] > '9')
		{
			ft_printf("check ur PID");
			exit(1);
		}
		b++;
	}
}

int	main(int ac, char **av)
{
	t_data	f;

	f.n = 0;
	if (ac == 3)
	{
		check_argument(av[1]);
		f.pid = ft_atoi(av[1]);
		f.c_bite = 8;
		while (av[2][f.n])
		{
			if (av[2][f.n] & 1 << --f.c_bite)
				kill(f.pid, SIGUSR1);
			else
				kill(f.pid, SIGUSR2);
			usleep(60);
			if (f.c_bite == 0)
			{
				f.n++;
				f.c_bite = 8;
			}
		}
	}
	else
		ft_printf("\033[1;31m check your argument\n");
}
