/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:52:45 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 14:21:37 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks for an alphabetic character;
int	ft_isalpha(int c)
{
	if ((c >= 'A' & c <= 'Z') || (c >= 'a' & c <= 'z'))
		return (1);
	return (0);
}
