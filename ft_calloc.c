/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:18:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 20:48:54 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates memory for an array of nmemb elements of size bytes each and re‐
//turns a pointer to the allocated memory. The memory is set to zero.
// If nmemb or size is 0,  then  returns  either NULL, or a unique pointer value
//that can later be successfully passed to free().If the multiplication of nmemb
// and size would result in integer overflow, then calloc() returns an error.
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalbytes;
	void	*ptr;

	totalbytes = nmemb * size;
	if (size && (totalbytes / size) != nmemb)
		return (NULL);
	ptr = malloc(totalbytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalbytes);
	return (ptr);
}
