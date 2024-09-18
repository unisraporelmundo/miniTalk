/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:18:42 by iizquier          #+#    #+#             */
/*   Updated: 2024/09/18 18:24:52 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_char_to_bit(const int pid, char c)
{
	int	mybit;

	mybit = 7;
	while (mybit >= 0)
	{
		if (((c >> mybit) & 1) == 1)
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
	}
	mybit--;
	usleep (200);
}

static void	ft_check_pid(int pid)
{
	if (pid <= 0)
	{
		ft_printf (MSG_PID_2 "\n");
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;	
	
	if (argc <= 2)
	{
		ft_printf (MSG_ARG_1 "\n");
		return (1);
	}
	if (argc >= 4)
	{
		ft_printf (MSG_ARG_2 "\n");
		return (1);
	}
	if (argc == 3)
	{
		i = 0;
		while (argv[2][i])
			ft_char_to_bit (pid, argv[2][i++]);
		ft_char_to_bit (pid, '\0');
	}
	return (0);
}