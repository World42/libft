/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:42:34 by world42           #+#    #+#             */
/*   Updated: 2013/11/26 18:38:30 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int		i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
            return (char*)(s + i);
        --i;
    }
    return (NULL);
}
