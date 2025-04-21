/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:18:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/21 12:30:07 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// account for overlfow through divison + check that is not divided by 0
// ho to properly check calloc
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalbytes;
	void	*ptr;

	totalbytes = nmemb * size;
	if (size && (totalbytes/size) != nmemb)
		return (NULL);
	ptr = malloc(totalbytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalbytes);
	return (ptr);
}
