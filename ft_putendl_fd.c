/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:27:17 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/24 12:31:32 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the specified file
// descriptor followed by a newline.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
		while(*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

