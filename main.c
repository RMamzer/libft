/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:38:15 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/28 21:04:21 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

char ft_mapi(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (c - 32);
	}
	return (c);
}

void ft_iteri(unsigned int i, char * str)
{
	if (i % 2 == 0)
	{
		(*str -= 32);
	}
}
int main(void)
{
	//--------------------ft_isalpha------------------------
	// printf("%d\n", ft_isalpha('c'));
	// printf("%d\n", ft_isalpha('A'));
	// printf("%d\n", ft_isalpha('Z'));
	// printf("%d\n", ft_isalpha(122)); //122 = z

	// printf("%d\n", ft_isalpha(126));
	// printf("%d\n", ft_isalpha('1'));




	//--------------------ft_isdigit------------------------
	// printf("%d\n", ft_isdigit('1'));
	// printf("%d\n", ft_isdigit('0'));
	// printf("%d\n", ft_isdigit(49)); // 49 = 1

	// printf("%d\n", ft_isdigit(126));// 126 = ~
	// printf("%d\n", ft_isdigit('a'));
	// printf("%d\n", ft_isdigit('/'));



	//--------------------ft_isalnum------------------------
	/*
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(122));

	printf("%d\n", ft_isalnum('/'));
	printf("%d\n", ft_isalnum(127));
	*/


	//--------------------ft_isascii------------------------
	/*
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));

	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(255));
	printf("%d\n", ft_isascii(1000));
	*/


	//--------------------ft_isprint------------------------
	/*
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('z'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(126));

	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(150));
	*/

	//--------------------ft_strlen------------------------
	// printf("%zu\n", ft_strlen("Hello")); //5
	// printf("%zu\n", ft_strlen("A")); //1
	// printf("%zu\n", ft_strlen("")); //0
	// printf("%zu\n", ft_strlen("Hello, world!"));//13
	// printf("%zu\n", ft_strlen("\x01\x02\x03\x00"));//3
	// printf("%zu\n", ft_strlen("\x00")); //0



	//--------------------ft_memset------------------------
	// char strmemset1[20];
	// char strmemset2[20];
	// int c = 'a';
	// printf("%.4s\n", (unsigned char*)ft_memset(strmemset1, c, 4));
	// printf("%.4s\n", (unsigned char*)ft_memset(strmemset2, c, 4));

	// printf("%.4s\n", (unsigned char*)memset(strmemset1, 96, 3));
	// printf("%.4s\n", (unsigned char*)memset(strmemset2, 96, 3));



	//--------------------ft_bzero------------------------
	// char strbzero[] = "12345678";
	// int len = ft_strlen(strbzero);
	// ft_bzero(strbzero, 2);
	// int i = 0;
	// while (i < len)
	// {
	// 	printf("%c", strbzero[i]);
	// 	i++;
	// }
	// printf("\n");

	// ft_bzero(strbzero, 5);
	// i = 0;
	// 	while (i < len)
	// {
	// 	printf("%c", strbzero[i]);
	// 	i++;
	// }




	//--------------------ft_memcpy------------------------
	// char	strmemcpy1[5] = "abcd";
	// char	strmemcpy2[10] = "12345";
	// char	strmemcpy3[10];

	// printf("%s\n",(unsigned char *)ft_memcpy(strmemcpy3,strmemcpy1,4));
	// printf("%s\n",(unsigned char *)ft_memcpy(strmemcpy2,strmemcpy1,4));





	//--------------------ft_memmove------------------------

	// char srcmemmove1[] = "123456789";
	// char srcmemmove2[] = "123456789";
	// char srcmemmove3[] = "123456789";
	// char srcmemmove4[] = "123456789";

	// ft_memmove(srcmemmove1 + 2, srcmemmove1, 6);
	// printf("%s\n", srcmemmove1);
	// memmove(srcmemmove2 + 2, srcmemmove2, 6);
	// printf("%s\n", srcmemmove2);

	// ft_memmove(srcmemmove3, srcmemmove3 + 2, 6);
	// printf("%s\n", srcmemmove3);
	// memmove(srcmemmove4, srcmemmove4 + 2 , 6);
	// printf("%s\n", srcmemmove4);




	//--------------------ft_strlcpy------------------------

	// char dest[20] = "\0";
	// char src[] = "123456789";
	// printf ("%zu\n", ft_strlcpy(dest, src, 9));
	// printf ("%s\n", dest);



	//--------------------ft_strlcat------------------------

	// char dest[15] = "abcde";
	// char dest2[15] = "abcde";
	// char src[] = "123456789";
	// printf ("%zu\n", ft_strlcat(dest, src, 7));
	// printf ("%zu\n", strlcat(dest2, src, 7));
	// printf ("%s\n", dest);
	// printf ("%s\n", dest2);




	//--------------------ft_toupper------------------------
	// printf("%c\n", ft_toupper('a'));
	// printf("%c\n", ft_toupper('z'));
	// printf("%c\n", ft_toupper('Z'));
	// printf("%c\n", ft_toupper('%'));
	// printf("%c\n", ft_toupper('1'));




	//--------------------ft_tolower------------------------
	// printf("%c\n", ft_tolower('C'));
	// printf("%c\n", ft_tolower('Z'));
	// printf("%c\n", ft_tolower('z'));
	// printf("%c\n", ft_tolower('@'));
	// printf("%c\n", ft_tolower('1'));


	//--------------------ft_strchr------------------------

	// char str1[]= "Ze worldo: Jojo reference";
	// char c = '\0';
	// printf("%s\n", ft_strchr(str1, 'o'));
	// printf("%s\n", strchr(str1, 'o'));
	// printf("%s\n", ft_strchr(str1, 'e'));
	// printf("%s\n", strchr(str1, 'e'));
	// printf("%s\n", ft_strchr(str1, c));
	// printf("%s\n", strchr(str1, c));
	// printf("%s\n", strchr(str1, '='));
	// printf("%s\n\n", ft_strchr(str1, '='));




	//--------------------ft_strrchr------------------------
	// char str1[]= "Ze worldo: Jojo reference";
	// char c = '\0';
	// printf("%s\n", ft_strrchr(str1, 'o'));
	// printf("%s\n", strrchr(str1, 'o'));
	// printf("%s\n", ft_strrchr(str1, 'e'));
	// printf("%s\n", strrchr(str1, 'e'));
	// printf("%s\n", ft_strrchr(str1, 'Z'));
	// printf("%s\n", strrchr(str1, 'Z'));
	// printf("%s\n", ft_strrchr(str1, c));
	// printf("%s\n", strrchr(str1, c));
	// printf("%s\n", strrchr(str1, '='));
	// printf("%s\n\n", ft_strrchr(str1, '='));



	//--------------------ft_strncmp------------------------
	// char str1[]= "Ze worldo: Jojo reference";
	// char str2[]= "Ze worldo: Jojo reference";
	// char str3[]= "Ze worldo: Anime reference";
	// char str4[]= "Ze worldo: YYYYYYYYYYYYYYYY";


	// printf("%d\n", ft_strncmp(str1, str2,15));
	// printf("%d\n\n", strncmp(str1, str2,15));

	// printf("%d\n", ft_strncmp(str1, str2,17));
	// printf("%d\n\n", strncmp(str1, str2,17));

	// printf("%d\n", ft_strncmp(str1, str2,0));
	// printf("%d\n\n", strncmp(str1, str2,0));

	// printf("%d\n", ft_strncmp(str1, str3,17));
	// printf("%d\n\n", strncmp(str1, str3,17));

	// printf("%d\n", ft_strncmp(str1, str4,17));
	// printf("%d\n\n", strncmp(str1, str4,17));




	//--------------------ft_memchr------------------------
	// char str[] = "123456";
	// char c = '7';

	// printf("%s\n", (unsigned char*)ft_memchr(str, c, 6));
	// printf("%s\n", (unsigned char*)memchr(str, c, 6));
	// printf("%s\n", (unsigned char*)ft_memchr(str, c, 6));
	// printf("%s\n", (unsigned char*)memchr(str, c, 6));
	// printf("%s\n", (unsigned char*)ft_memchr(str, '3', 6));
	// printf("%s\n", (unsigned char*)memchr(str, '3', 6));





	//--------------------ft_memcmp------------------------

	// char memcmps1[] = "Same";
	// char memcmps2[] = "Same ...NOT!:)";

	// printf("%d\n", ft_memcmp(memcmps1, memcmps2, 3));
	// printf("%d\n", ft_memcmp(memcmps1, memcmps2, 5));
	// printf("%d\n", ft_memcmp(memcmps1, memcmps2, 0));
	// printf("%d\n", ft_memcmp("ABC", "abc", 3));
	// printf("%d\n", ft_memcmp("abc", "ABC", 3));



	//--------------------ft_strnstr------------------------

	// char haystack[]= "ew world worldo: Jojoo reference of Jojo check";
	// char needle[]= "worldo";
	// printf("%s\n", ft_strnstr(haystack, needle, 20));
	// printf("%s\n", ft_strnstr(haystack, "w", 20));
	// printf("%s\n", ft_strnstr(haystack, "e", 1));
	// printf("%s\n", ft_strnstr(haystack, "e", 0));
	// printf("%s\n", ft_strnstr(haystack, needle, 0));




	//--------------------ft_atoi------------------------

	// char n[] = "-2147483649";//"9223372036854775808";
	// printf("%d\n", ft_atoi(n));
	// printf("%d\n", atoi(n));



	//--------------------ft_calloc------------------------


	// char *str = ft_calloc(10,2);
	// str[17] = 'a';
	// int i = 0;
	// while (i < 20)
	// {
	// 	if (str[i] == '\0')
	// 		printf("position %d is null\n", i);
	// 	else
	// 		printf("position %d FAIL\n", i);
	// 	i++;
	// }




/*//ft_itoa test

printf("%s\n", ft_itoa(-123));
printf("%s\n", ft_itoa(10));
printf("%s\n", ft_itoa(-9));
printf("%s\n", ft_itoa(8));
printf("%s\n", ft_itoa(9));
printf("%s\n", ft_itoa(111));
printf("%s\n", ft_itoa(1));
printf("%s\n", ft_itoa(-1));
printf("%s\n", ft_itoa(0));
*/

/*

*/




	// ft_strnstr test
/*

*/
	// calloc test
/*

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
//printf("%s\n", ft_strtrim("   abc   def   ", " "));

//ft_split test
/*
char split[]= "My name is Jojo";
char **splitted = ft_split(split, ' ');
int i;
i =0;
 while (splitted[i])
  {
 	printf ("%s\n", splitted[i]);
	free(splitted[i]);
 	i++;
  }
free(splitted);
*/

//ft_itoa test

// printf("%s\n", ft_itoa( -2147483648));
// printf("%s\n", ft_itoa(10));
// printf("%s\n", ft_itoa(-9));
// printf("%s\n", ft_itoa(8));
// printf("%s\n", ft_itoa(9));
// printf("%s\n", ft_itoa(111));
// printf("%s\n", ft_itoa(1));
// printf("%s\n", ft_itoa(-1));
// printf("%s\n", ft_itoa(0));



//ft_strmapi -------------------> extra function on top
/*
char mapistr[] = "qwertyuiop[]";
printf("%s\n", ft_strmapi(mapistr, ft_mapi));
*/


//ft_striteri ---------------------> extra function on top
/*
char iteristr[] = "qwertyuiop[]";
ft_striteri(iteristr, ft_iteri);
printf("%s\n", iteristr);
*/


//ft_putchar_fd test
/*
ft_putchar_fd('a', 1);
ft_putchar_fd('a', 2);
*/



//ft_puststr_fd test
/*
ft_putstr_fd("Ronaldooo\n", 1);
ft_putstr_fd("Ronaldooo\n", 2);
ft_putstr_fd("", 1);
ft_putstr_fd("", 2);
*/

//ft_putendl_fd test
/*
ft_putendl_fd("Ronaldoo", 1);
ft_putendl_fd("Ronaldo?", 2);
ft_putendl_fd("",1);
ft_putendl_fd("",1);

*/

// ft_putnbr_fd test
/*
ft_putnbr_fd(1,1);
printf("\n");
ft_putnbr_fd(1000,1);
printf("\n");
ft_putnbr_fd(999,1);
printf("\n");
ft_putnbr_fd(999,2);
printf("\n");
ft_putnbr_fd(0,1);
printf("\n");
ft_putnbr_fd(-2147483648,1);
printf("\n");
ft_putnbr_fd(2147483647,1);
printf("\n");
*/
}
