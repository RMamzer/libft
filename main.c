/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:38:15 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/22 20:14:42 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
/*
	//mem chr test
	// How to test if not found?
	printf ("\n\n memchr test\n\n");

	char str[] = "123456";
	char c = '7';

	printf("%s\n", (unsigned char*)ft_memchr(str, c, 6));
*/


//strlcpy test
/*
char dest[7] = "abcdef";
char dest2[7] = "abcdef";
char src[] = "123456789";
printf ("%s\n", dest);
printf ("%zu\n", ft_strlcpy(dest, src, 2));
printf ("%s\n", dest);
*/

/*
char dest[15] = "abcde";
char dest2[15] = "abcde";
char src[] = "123456789";
printf ("%zu\n", ft_strlcat(dest, src, 13));
printf ("%s\n", dest);
*/

// toupper and tolower
/*
	printf("ft_tolower\n");
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", ft_tolower('c'));
	printf("%c\n", ft_tolower('@'));
	printf("%c\n", ft_tolower('1'));
	printf("\nft_toupper\n");
	printf("%c\n", ft_toupper('C'));
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", ft_toupper('%'));
	printf("%c\n", ft_toupper('1'));
	*/

// strchr test
/*
	char str1[]= "Ze worldo: Jojo reference";
	char c;
	printf("%s\n", ft_strchr(str1, 'o'));
	printf("%s\n", ft_strchr(str1, 'e'));
	printf("%s\n", ft_strchr(str1, c));
	printf("%s\n\n", ft_strchr(str1, '='));
	printf("%s\n", strchr(str1, 'o'));
	printf("%s\n", strchr(str1, 'e'));
	printf("%s\n", strchr(str1, c));
	printf("%s\n", strchr(str1, '='));
*/

// strrchr test || HOW TO TEST WHATS WRONG !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/*
	char str1[]= "Ze worldo: Jojo reference";
	char c = ' ';
	printf("%s\n", ft_strrchr(str1, 'o'));
	printf("%s\n", ft_strrchr(str1, 'e'));
	printf("%s\n", ft_strrchr(str1, c));
	printf("%s\n\n", ft_strrchr(str1, '!'));
	printf("%s\n", strrchr(str1, 'o'));
	printf("%s\n", strrchr(str1, 'e'));
	printf("%s\n", strrchr(str1, c));
	printf("%s\n", strrchr(str1, '!'));
*/

// ft_strncmp
/*
	char str1[]= "Ze worldo: Jojo";
	char str2[]= "Ze worldo: Jojo";
	char str3[]= "Ze world: Jojo";
	char str4[]= "Ze worldo: Jojo reference";
	char str5[]= "Ze worldo";
	char str6[]= "";

	printf("%d\n", ft_strncmp(str1, str2,15));
	printf("%d\n\n", strncmp(str1, str2,15));

	printf("%d\n", ft_strncmp(str1, str2,17));
	printf("%d\n\n", strncmp(str1, str2,17));

	printf("%d\n", ft_strncmp(str1, str2,0));
	printf("%d\n\n", strncmp(str1, str2,0));

	printf("%d\n", ft_strncmp(str1, str3,17));
	printf("%d\n\n", strncmp(str1, str3,17));

	printf("%d\n", ft_strncmp(str1, str4,20));
	printf("%d\n\n", strncmp(str1, str4,20));

	printf("%d\n", ft_strncmp(str1, str5,15));
	printf("%d\n\n", strncmp(str1, str5,15));

	printf("%d\n", ft_strncmp(str1, str6,15));
	printf("%d\n\n", strncmp(str1, str6,15));
*/

	//atoi test
	/*
	char n[] = "2147483648";
	printf("%d\n", ft_atoi(n));
	printf("%d\n", atoi(n));
*/

	// ft_strnstr test
	/*
	char haystack[]= "Ze worldo: Jojoo reference of Jojo check";
	char needle[]= "";
	printf("%s\n", ft_strnstr(haystack, needle, 40));
	*/


	// calloc test
/*
	printf("%s\n", (char*)ft_calloc(5,2));
	printf("%s\n", (char*)ft_calloc(7,0));
	printf("%s\n", (char*)ft_calloc(0,7));
*/

	//strdup test
	/*
	char dup[]= "STEEEEL BAAAAAALL RUUUUUUN";
	char dup2[]= "";
	printf("%s\n", ft_strdup(dup));
	printf("%s\n", ft_strdup(dup2));
	*/

//substr test
/*
	char origstr[]= "012345";
	printf("%s\n", ft_substr(origstr, 0, 10));
	printf("%s\n", ft_substr(origstr, 1, 4));
	printf("%s\n", ft_substr(origstr, 10, 4));
	printf("%s\n", ft_substr(origstr, 5, 4));
	printf("%s\n", ft_substr("", 1, 0));
*/

//strjoin test

// char	join1[] = "Miau miau =";
// char	join2[] = "Gav gav ";
// printf("%s\n", ft_strjoin(join1, join2));
// printf("%s\n", ft_strjoin(join1, ""));
// printf("%s\n", ft_strjoin("", join2));
// printf("%s\n", ft_strjoin("", ""));

//strtrim test
/*
char org[] = "abcadeafg";
char set[] = "a";

printf("%s\n", ft_strtrim(org, set));
*/


//ft_split test
char split[]= "My name is Jojo";
char **splitted = ft_split(split, ' ');
int i;
i =0;
while (splitted[i])
 {
	printf ("%s\n", splitted[i]);
	i++;
 }
}

