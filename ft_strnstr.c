/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:33:19 by lim               #+#    #+#             */
/*   Updated: 2020/02/28 05:49:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char const *str, char const *find, unsigned int n)
{
    char            *result;
    unsigned int    i;
    unsigned int    j;
    
    result = (char *)str;
    if (!*find)
        return (result);
    i = 0;
    while (*(result + i) && i < n)
    {
        if (*(result + i) == *find)
        {
            j = 1;
            while ((*(result + i + j) == *(find + j)) && *(find + j)
                        && *(result + i + j) && i + j < n)
                j++;
            if (!*(find + j))
                return (result + i);
        }
        i++;
    }
    return ((char *)0);
}
