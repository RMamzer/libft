/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:33:08 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/20 14:42:19 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// why not 1 while loop --> null if uninitialized char, should be blank, no idea why org behaves like this
char	*ft_strchr(const char *s, int c)
{
	unsigned char chr;
	unsigned const char	*str;

	chr = (unsigned char)c;
	str = (unsigned const char *)s;
	while ( *s && *str != chr)
		str++;
	if (*str == chr)
		return ((char *)str);
	else
		return (NULL);
}
