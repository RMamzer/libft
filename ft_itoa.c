/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:17:01 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/23 16:24:02 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function converts int into char str. Long long is used against overflow (transition from
int min into int max). Figure out the length (including '-') and create a while loop
taking the last digit, putting it ar the end of str, and moving towards index[0]. Run
while there is still length*/
#include "libft.h"

static size_t	ft_numlen(long long n)
{
	size_t len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *=-1;
	}
	while(n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}
char	*ft_itoa(int n)
{
	char *str;
	long long num;
	size_t len;

	num = (long long)n;
	len =  0;
	len = ft_numlen(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0]= '-';
		num = -num;
	}
	if (num == 0)
		str[0] ='0';
	while (  num != 0 )
	{
		len--;
		str[len] = num % 10 + 48;
		num = num / 10;
	}
	return(str);
}

