/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:45:16 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/25 18:55:37 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in the list.
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i =0;
	while (lst != NULL)
	{
		i++;
		lst = lst ->next;
	}
	return (i);
}
