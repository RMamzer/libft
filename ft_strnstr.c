/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:32:36 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 20:27:49 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates the first occurrence of  little in the  big, where not more than len
// characters are searched. If little is an empty string, big is returned;
// if little occurs nowhere in big, NULL is returned. otherwise a pointer
//to the first character of the first occurrence of little is returned.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*to_find;
	const unsigned char	*str;
	size_t				i;
	size_t				j;

	to_find = (const unsigned char *)little;
	str = (const unsigned char *)big;
	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
