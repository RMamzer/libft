/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:47:50 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/21 12:49:29 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
// check value of 0;
void	ft_bzero( void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	i=0;

	while (i<n)
	{
		ptr[i]= 0;
		i++;
	}
}
