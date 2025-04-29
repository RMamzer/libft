/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:03:02 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/29 12:57:16 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates memory (using malloc(3)) and returns a new string, which is the
//result of concatenating ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;
	size_t	str1_l;
	size_t	str2_l;

	str1_l = ft_strlen(s1);
	str2_l = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	joinedstr = malloc(str1_l + str2_l + 1);
	if (!joinedstr)
		return (NULL);
	ft_memcpy(joinedstr, s1, str1_l);
	ft_memcpy(joinedstr + str1_l, s2, str2_l);
	joinedstr[str1_l + str2_l] = '\0';
	return (joinedstr);
}
