/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:49:22 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 14:21:46 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks for an alphanumeric character.
// 0 if no, other if yes.
int	ft_isalnum(char c)
{
	if ((c >= 'A' & c <= 'Z') || (c >= 'a' & c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
