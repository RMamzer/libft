/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:15:57 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/21 15:02:35 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t str_l;

	if(!s)
		return (NULL);
	str_l = ft_strlen(s);
	if (start > str_l)
		return(ft_strdup(""));
	if (len > str_l - (size_t)start)
		len = str_l - (size_t)start;
	substr= malloc(len + 1);
	if (!substr)
		return(NULL);
	substr = ft_memcpy(substr, s + (size_t)start,len);
	substr[len] = '\0';
	return (substr);
}
