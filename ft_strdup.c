/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:31:44 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/29 12:37:07 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a pointer to a new string which is a duplicate of the string s.
// Memory  is  obtained  with malloc(3), and can be freed with free(3).
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
