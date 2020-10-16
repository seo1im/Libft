/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 05:55:43 by lim               #+#    #+#             */
/*   Updated: 2020/02/27 11:25:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char const *str)
{
	unsigned int	i;
	
	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, const char *src, unsigned int n)
{
	unsigned int	dest_len;
	unsigned int	return_value;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	return_value = n <= dest_len ? ft_strlen(src) + n : ft_strlen(src) + dest_len;
	i = 0;
	while (*(src + i) && dest_len < n - 1)
	{
		*(dest + dest_len) = *(src + i);
		dest_len++;
		i++;
	}
	*(dest + dest_len) = 0;
	return (return_value);
}
