/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:31:07 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 20:30:47 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Scans the initial n bytes of the memory area pointed to by s for the first
// instance of c. Return a pointer to the matching byte or NULL
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;

	str = (unsigned const char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
