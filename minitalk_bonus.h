/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:19:27 by iizquier          #+#    #+#             */
/*   Updated: 2024/09/18 16:40:45 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

# ifndef _POSIX_C_SOURCE
#  define _POSIX_C_SOURCE 200000L
# endif

# include "./Libft/libft.h"
# include "./PrintF/ft_printf.h"

# define MSG_ARG_1 "Arguments missing"
# define MSG_ARG_2 "Too many Arguments"
# define MSG_PID_1 "Could not generate the PID"
# define MSG_PID_2 "Invalid PID"
# define MSG_WAR_1 "Delivery failed"
# define MSG_INF_1 "Info message 1"
# define MSG_SUC_1 "Success message 1"

#endif