/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 05:12:25 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 05:50:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char   *dest_temp;
    unsigned char   *src_temp;
    unsigned int    i;

    dest_temp = (unsigned char *)dest;
    src_temp = (unsigned char *)src;
    i = 0;
    if (dest_temp > src_temp)
    {
        while (++i <= n)
            *(dest_temp + n - i) = *(src_temp + n - i);
    }
    else
    {
        while (i < n)
        {
            *(dest_temp + i) = *(src_temp + i);
            i++;
        }
    }
    return (dest);
}
