/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 04:55:52 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 05:49:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	const char		*src_temp;
	char			*dest_temp;
	unsigned int	i;

	src_temp = (char *)src;
	dest_temp = (char *)dest;
	i = 0;

	//TODO : check have to when n is over malloc size!!
	while (i < n)
	{
		*(dest_temp + i) = *(src_temp + i);
		i++;
	}
	return (dest);
}
