/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:45:44 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/21 10:27:30 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset( void *s,  int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i< n)
	{
		ptr[i] = (unsigned char)c;
		i++;
 	}
	return(s);
}
