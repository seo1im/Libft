/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:45:18 by marvin            #+#    #+#             */
/*   Updated: 2020/02/28 09:50:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_lstclear_re(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return ;
    if (lst->next)
        ft_lstclear_re(lst->next, del);
    del(lst->content);
    free(lst);
}

void        ft_lstclear(t_list **lst, void (*del)(void *))
{
    if(!*lst || !lst)
        return ;
    ft_lstclear_re(*lst, del);
}