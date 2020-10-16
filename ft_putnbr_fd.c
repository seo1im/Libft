/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:44:29 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 00:16:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digit(int n, int fd, int sign)
{
	char c;

	if (n == 0)
		return ;
	write_digit(n / (10 * sign), fd, 1);
	c = (n % 10) * sign + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	sign = n < 0 ? -1 : 1;
	if (sign < 0)
		write(fd, "-", 1);
	write_digit(n, fd, sign);
}
