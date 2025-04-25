/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:16:57 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 20:38:09 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and all its
// successors, using the function ’del’ and free(3).
// Finally, set the pointer to the list to NULL.
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return;
	current = *lst;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		del(temp-> content);
		free(temp);
	}
*lst = NULL;
}
