/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:40:20 by marvin            #+#    #+#             */
/*   Updated: 2020/02/28 09:43:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new_lst)
{
    t_list *list;

    if (!(list = *lst))
    {
        *lst = new_lst;
        return ;
    }
	if (!new_lst)
		return ;
    while (list->next)
        list = list->next;
    list->next = new_lst;
}