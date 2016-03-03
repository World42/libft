/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 03:00:04 by world42           #+#    #+#             */
/*   Updated: 2014/04/27 03:43:08 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	dst = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcat(dst, s2);
	return (dst);
}
