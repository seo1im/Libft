/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lim <lim@student.le-101.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:34:23 by lim               #+#    #+#             */
/*   Updated: 2020/02/26 01:19:23 by lim              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char		*ft_strdup(const char *str)
{
	char	*dest;
	int		i;

	if ((dest = malloc(sizeof(char) * (ft_strlen(str) + 1))) == 0)
		return (0);
	i = 0;
	while (*(str + i))
	{
		*(dest + i) = *(str + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
