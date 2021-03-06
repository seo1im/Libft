/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lim <lim@student.le-101.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 04:45:12 by lim               #+#    #+#             */
/*   Updated: 2020/02/26 01:25:51 by lim              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *arr, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	temp = (char *)arr;
	i = -1;
	while (++i < n)
		*(temp + i) = 0;
}
