/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:30:24 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 18:39:50 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the beginning of the list.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst && new)
	{
		new ->next = *lst;
		*lst = new;
	}
}
