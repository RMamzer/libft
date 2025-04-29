/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:25:03 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/29 13:28:12 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to store the
// results from the successive applications of f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*smodified;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	smodified = malloc(ft_strlen(s) + 1);
	if (!smodified)
		return (NULL);
	while (s[i])
	{
		smodified[i] = f(i, s[i]);
		i++;
	}
	smodified[i] = '\0';
	return (smodified);
}
