/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:33:08 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 19:07:01 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a pointer to the first occurrence of the character c in the string s.
//The terminating null byte is considered part of the string,
char	*ft_strchr(const char *s, int c)
{
	unsigned char		chr;
	unsigned const char	*str;

	chr = (unsigned char)c;
	str = (unsigned const char *)s;
	while (*str)
	{
		if (*str == chr)
			return ((char *)str);
		str++;
	}
	if (*str == chr)
		return ((char *)str);
	return (NULL);
}
