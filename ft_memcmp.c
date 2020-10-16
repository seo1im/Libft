/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 02:28:59 by marvin            #+#    #+#             */
/*   Updated: 2020/02/28 05:46:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned char   *s1_temp;
    unsigned char   *s2_temp;
    unsigned int    i;

    i = -1;
    s1_temp = (unsigned char *)s1;
    s2_temp = (unsigned char *)s2;
    while (++i < n)
        if(*(s1_temp + i) != *(s2_temp + i))
        {
            return ((int)(*(s1_temp + i) - *(s2_temp + i)));
        }
    return (0);
}
