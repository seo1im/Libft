/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lim <lim@student.le-101.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 04:41:38 by lim               #+#    #+#             */
/*   Updated: 2020/02/26 01:29:02 by lim              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *arr, int data, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	temp = (char *)arr;
	i = 0;
	while (i < n)
	{
		*(temp + i) = (char)data;
		i++;
	}
	return (arr);
}
