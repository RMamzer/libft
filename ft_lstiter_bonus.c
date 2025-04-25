/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:35:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 20:57:45 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates through the list ’lst’ and applies the
// function ’f’ to the content of each node.
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst != NULL)
	{
		f(lst->content);
		lst =lst->next;
	}
}
