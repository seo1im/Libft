/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lim <lim@student.le-101.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:27:27 by lim               #+#    #+#             */
/*   Updated: 2020/02/25 23:56:49 by lim              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}