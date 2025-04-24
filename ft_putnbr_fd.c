/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:36:31 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/24 13:03:32 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the specified file
// descriptor.
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n  == -2147483648)
	{
		write(fd, "-2147483648", 11 );
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}

	if (n > 9)
	{
		ft_putnbr_fd (n/10, fd);
	}
	c = n % 10 + 48;
	write (fd, &c, 1);
}

/*
Logic:
1. Get n, check for int min, return if appears
2. Check for  -, output it, multipply by -1
3. Start the recursion, write using fd*/
