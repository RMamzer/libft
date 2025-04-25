/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:01:09 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 19:09:53 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the last node of the list.
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
