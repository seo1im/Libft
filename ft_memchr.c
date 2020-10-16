/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lim <lim@student.le-101.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 05:13:30 by lim               #+#    #+#             */
/*   Updated: 2020/02/26 01:28:42 by lim              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *arr, int data, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	temp = (char *)arr;
	i = 0;
	while (i < n)
	{
		if (*(temp + i) == data)
			return (temp + i);
		i++;
	}
	return (0);
}
