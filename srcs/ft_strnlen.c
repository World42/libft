/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:17:08 by world42           #+#    #+#             */
/*   Updated: 2013/11/21 12:29:03 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	if (*s && maxlen)
		return (ft_strnlen(s + 1, maxlen - 1) + 1);
	return (0);
}
