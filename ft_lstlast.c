/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 09:35:04 by marvin            #+#    #+#             */
/*   Updated: 2020/02/29 05:41:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list   *ft_lstlast(t_list *lst)
{
    t_list *last;

    if (!(last = lst))
        return (0);
    while (last->next)
		last = last->next;
	return (last);
}