/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:47:50 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/17 19:19:15 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


void	ft_bzero( void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	i=0;

	while (i<n)
	{
		ptr[i++]= 0;
	}
}
