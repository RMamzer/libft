/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:20:42 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 14:15:34 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	not_trimmed(char c, char const *set)
{
	while (*set)
	{
		if	(*set == c)
			return (0);
		set++;
	}
	return (1);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	size;
	size_t i;

	size = 0;
	i = 0;
	while (s1[i])
	{
		size = size + not_trimmed(s1[i], set);
		i++;
	}
	trimmed = malloc(size + 1);
	if(!trimmed)
		return(NULL);
	i = 0;
	while(*s1)
	{
		if (not_trimmed(*s1, set))
		{
			trimmed[i++] = *s1;
		}
		s1++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
*/
/*
1. Logic: count how many letters you should have to malloc
2. malloc them
3. do copy without the set letters
REDO
1. callculate the malloc size (from front, from back, strlen - bot - top)
2. Write a function


*/
static size_t	trimcheck(char c, char const *set)
{
	while(*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	size_t start;
	size_t end;

	if(!s1)
		return(ft_strdup(""));
	start = 0;
	end = ft_strlen(s1)-1;

	while (trimcheck (s1[start], set ))
		start++;

	while (trimcheck (s1[end], set ))
		end--;

	trimmed = ft_substr(s1 + start, 0, end - start + 1);

	if (!trimmed)
		return (NULL);

	return (trimmed);
}


