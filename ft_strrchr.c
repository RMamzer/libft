/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:26:40 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/20 14:27:23 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// no need to convert in last if cause it can  only be null terminator
// not sure how to test
char	*ft_strrchr(const char *s, int c)
{
	/*
	 const char	*ptr;

	 ptr = NULL;
	 while (*s)
	 {
		if ((unsigned char)*s == (unsigned char)c)
			ptr = s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ((char *)ptr);
	*/

	unsigned char	chr;
	unsigned const char	*str;
	size_t	i;

	chr = (unsigned char)c;
	str = (unsigned const char *)s;
	i = 0;

	while (str[i] != '\0')
		i++;

	while(i >= 0)
	{
		if (str[i] == chr)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

