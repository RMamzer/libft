/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:25:03 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/23 18:18:57 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ to each character of the
// string passed as argument, passing its index as
// the first argument. Each character is passed by
// address to ’f’ so it can be modified if necessary.
#include "libft.h"

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
	while(s[i])
	{
		smodified[i] = f(i,s[i]);
		i++;
	}
	smodified[i] = '\0';
	return (smodified);
}
