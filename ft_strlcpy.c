/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 05:43:16 by lim               #+#    #+#             */
/*   Updated: 2020/02/27 11:20:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char const *dest)
{
	unsigned int i;

	i = 0;
	while (*(dest + i))
		i++;
	return (i);
}

unsigned int		ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n)
	{
		//TODO : HAVE TO CHECK SIZE OVER DEST

		while (i < n - 1 && *(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = 0;
	}
	return (ft_strlen(src));
}
