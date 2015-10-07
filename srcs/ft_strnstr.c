/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:26:33 by world42           #+#    #+#             */
/*   Updated: 2013/12/29 23:04:15 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t	index1;
    size_t	index2;

    index1 = 0;
    while (s1[index1] && n--)
    {
        index2 = 0;
        while (s1[index1 + index2] &&
               s2[index2] && s2[index2] == s1[index1 + index2])
            index2++;
        if (!s2[index2])
            return (char*)(s1 + index1);
        index1++;
    }
    return (NULL);
}
