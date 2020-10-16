/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:52:16 by marvin            #+#    #+#             */
/*   Updated: 2020/02/29 05:45:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list   *ft_lstnew(void *content)
{
    t_list *lst;
    if ((lst = malloc(sizeof(t_list))) == 0)
        return (0);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}

static t_list   *ft_lstclear(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return (0);
    if (lst->next)
        ft_lstclear(lst->next, del);
    del(lst->content);
    free(lst);
    return (0);
}

t_list          *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *begin_lst;
    t_list *new_lst;

    if ((new_lst = ft_lstnew(f(lst->content))) == 0 || !lst)
        return (0);
    begin_lst = new_lst;
    lst = lst->next;
    while (lst)
    {
        if ((new_lst->next = ft_lstnew(f(lst->content))) == 0)
            return (ft_lstclear(begin_lst, del));
        lst = lst->next;
        new_lst = new_lst->next;
    }
    return (begin_lst);
}