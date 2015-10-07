/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 05:00:15 by world42           #+#    #+#             */
/*   Updated: 2014/01/22 05:00:16 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_matchn(const char *str, const char *match)
{
    if (!*str)
    {
        if (!*match)
            return (1);
        if (*match == '*')
            return (ft_matchn(str, match + 1));
    }
    else if (*str == *match)
        return (ft_matchn(str + 1, match + 1));
    else if (*match == '*')
    {
        if (!match[1])
            return (1);
        return (ft_matchn(str, match + 1) + ft_matchn(str + 1, match));
    }
    return (0);
}
