/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:23:34 by marvin            #+#    #+#             */
/*   Updated: 2020/02/28 10:31:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new_lst)
{
    t_list *list;

    write(1, "w\n", 2);
    if (!(list = *lst))
    {
        *lst = new_lst;
        return ;
    }
    
	if (new_lst)
	{
		new_lst->next = list;
		*lst = new_lst;
	}
}