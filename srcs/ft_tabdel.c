/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 03:12:27 by world42           #+#    #+#             */
/*   Updated: 2014/01/25 00:29:13 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void	ft_tabdel(char ***tab)
{
	long	i;

	if (*tab && **tab)
	{
		i = 0;
		while ((*tab)[i] != NULL)
		{
			free((*tab)[i]);
			++i;
		}
		free(*tab);
		*tab = NULL;
	}
}
