/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:42:17 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/29 13:13:51 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **splitted)
{
	size_t	i;

	i = 0;
	while (splitted[i])
		free(splitted[i++]);
	free(splitted);
	return (NULL);
}

static size_t	ft_wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static size_t	ft_wcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += ft_wlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	i;

	if (!s)
		return (NULL);
	splitted = malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			splitted[i] = ft_substr(s, 0, ft_wlen(s, c));
			if (!splitted[i++])
				return (ft_free(splitted));
			s += ft_wlen(s, c);
		}
		else
			s++;
	}
	splitted[i] = NULL;
	return (splitted);
}
