/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:39:05 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/17 19:19:57 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned const char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

return (dest);
}
