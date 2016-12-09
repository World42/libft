/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:41:32 by ale-batt          #+#    #+#             */
/*   Updated: 2016/12/09 18:30:22 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_log.h"
#include <time.h>

void	log_printflags(t_log *log)
{
	if (log->flag_time == 1)
	{
		ft_putstr_fd(localtime(time(NULL))->tm_hour, log->fd);
		ft_putstr_fd("  ", log->fd);
	}	
}

void	log_setflag(int flag)
{
	t_log	*log;

	log = log_singleton(NULL);
	if (flag == FLAG_TIME)
		log->flag_time = 1;
}
