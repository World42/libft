/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:16:03 by world42           #+#    #+#             */
/*   Updated: 2013/12/29 23:24:54 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int	index;

	index = ft_strlen(s1);
	while (*s2)
	{
		s1[index] = *s2;
		s2 = s2 + 1;
		++index;
	}
	s1[index] = '\0';
	return (s1);
}
