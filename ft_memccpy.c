/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 05:00:40 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 05:50:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int data, unsigned int n)
{	
	const char		*src_temp;
	char			*dest_temp;
	unsigned int	i;

	dest_temp = (char *)dest;
	src_temp = (char *)src;
	i = 0;
	while (i < n)
	{
		*(dest_temp + i) = *(src_temp + i);

		// TODO : data check last word is same with c
		if (*(src_temp + i) == data)
			return (dest_temp + i + 1);
		i++;
	}
	return (0);
}
