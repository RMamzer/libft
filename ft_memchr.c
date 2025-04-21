/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:31:07 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/21 10:27:04 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;

	str = (unsigned const char *)s;
	while( n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return(NULL);
}
