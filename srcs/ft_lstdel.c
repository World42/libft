/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:34:29 by world42           #+#    #+#             */
/*   Updated: 2013/12/29 23:29:41 by world42          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list	*new_next;

	if (alst)
    {
      while ((*alst) != NULL)
        {
          new_next = (*alst)->next;
          (*del)((*alst)->content, (*alst)->content_size);
          (*alst)->next = NULL;
          free(*alst);
          *alst = new_next;
        }
    }
}
