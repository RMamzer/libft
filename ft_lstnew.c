/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:35:09 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 18:09:55 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory (using malloc(3)) and returns
// a new node. The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.
# include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if(node == NULL)
		return (NULL);
	node ->content = content;
	node ->next = NULL;
	return (node);
}
