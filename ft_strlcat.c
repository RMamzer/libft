/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:13:17 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 18:25:19 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// appends the NUL-terminated string src to the end of dst. It will append
//almost size - strlen(dst) - 1 bytes, NUL-terminating the result.
//Returns initial length of dst plus the length of src OR size
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (s_len);
	if (d_len >= size)
		return (size + s_len);
	while (i + d_len < size - 1 && src[i])
	{
		dst[i + d_len] = src[i];
		i++;
	}
	dst[i + d_len] = '\0';
	return (d_len + s_len);
}
