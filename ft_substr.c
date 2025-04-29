/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:15:57 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/29 12:50:09 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates memory (using malloc(3)) and returns a substring from the string s
//The substring starts at index ’start’ and has amaximum length of ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_l;

	if (!s)
		return (NULL);
	str_l = ft_strlen(s);
	if (start > str_l)
		return (ft_strdup(""));
	if (len > str_l - (size_t)start)
		len = str_l - (size_t)start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	substr = ft_memcpy(substr, s + (size_t)start, len);
	substr[len] = '\0';
	return (substr);
}
