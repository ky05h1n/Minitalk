/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:59:27 by enja              #+#    #+#             */
/*   Updated: 2022/05/25 23:09:14 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf.h"
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>

typedef struct t_data{
	int		c_bite;
	int		pid;
	int		n;
}	t_data;
#endif