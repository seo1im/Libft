/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:02:29 by lim               #+#    #+#             */
/*   Updated: 2020/02/29 10:33:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char				*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*substring;
	unsigned int	i;

	if (!*s || ft_strlen(s) < start)
		return (0);
	if ((substring = malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	i = 0;
	while (*(s + start + i) && i < len)
	{
		*(substring + i) = *(s + start + i);
		i++;
	}
	*(substring + i) = 0;
	return (substring);
}
