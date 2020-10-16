/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:54:16 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 00:03:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	word_len(int n, int sign)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (sign < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	set_word(char *str, int n, int pos, int sign)
{
	if (n == 0)
		return ;
	*(str + pos) = (n % 10) * sign  + '0';
	set_word(str, (n / (10 * sign)), pos - 1, 1);
}

char		*ft_itoa(int n)
{
	char *str;
	int len;
	int sign;

	sign = n >= 0 ? 1 : -1;
	len = word_len(n, sign);
	if ((str = malloc (sizeof(char) * (len + 1))) == 0)
		return (0);
	if (n == 0)
		*str = '0';
	set_word(str, n, len - 1, sign);
	if (sign < 0)
		*(str) = '-';
	*(str + len) = 0;
	return (str);
}