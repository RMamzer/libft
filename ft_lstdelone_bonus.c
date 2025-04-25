/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:48:02 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 19:59:28 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes a node as parameter and frees its content
// using the function ’del’. Free the node itself but
// does NOT free the next node.
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst || !del)
		return;
	del (lst->content);
	free(lst);
}
