/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:38:15 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/18 12:38:17 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>


int main(void)
{

	//mem chr test
	// How to test if not found?
	printf ("\n\n memchr test\n\n");

	char str[] = "123456";
	char c = '7';

	printf("%s\n", (unsigned char*)ft_memchr(str, c, 6));

}
