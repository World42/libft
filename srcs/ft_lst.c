/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 15:36:10 by world42           #+#    #+#             */
/*   Updated: 2014/02/21 17:47:21 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

t_list		*ft_lst(void *content, size_t content_size)
{
    t_list	*list;

    list = (t_list*)malloc(sizeof(t_list));
    if (!list)
        return (NULL);
    if (content)
    {
        list->content = content;
        list->content_size = content_size;
    }
    else
    {
        list->content = NULL;
        list->content_size = 0;
    }
    list->next = NULL;
    return (list);
}
