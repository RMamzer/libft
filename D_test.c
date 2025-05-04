/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:12:51 by dlytvync          #+#    #+#             */
/*   Updated: 2025/04/30 13:51:26 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>
#include <string.h>

char test_func(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
        if (c >= 'a' && c <= 'z') return (c - 32);
    }
    else
    {
        if (c >= 'A' && c <= 'Z') return (c + 32);
    }
    return c;
}

void test_func1(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c - 32;
}

int main()
{
	printf("------------------------------------------------------------------------------------\n");
	// FT_ISALPHA TEST
	printf("ft_isalpha('A'):\t[%d]\n", ft_isalpha('A'));
	printf("isalpha('A'):\t\t[%d]\n", isalpha('A'));

	printf("\nft_isalpha('!'):\t[%d]\n", ft_isalpha('!'));
	printf("isalpha('!'):\t\t[%d]\n", isalpha('!'));

	printf("------------------------------------------------------------------------------------\n");
	// FT_ISDIGIT TEST
	printf("ft_isdigit('2'):\t[%d]\n", ft_isdigit('2'));
	printf("isdigit('2'):\t\t[%d]\n", isdigit('2'));

	printf("\nft_isdigit(44):\t\t[%d]\n", ft_isdigit(44));
	printf("isdigit(44):\t\t[%d]\n", isdigit(44));

	printf("------------------------------------------------------------------------------------\n");
	//FT_ISALNUM TEST
	printf("ft_isalnum('A'):\t[%d]\n", ft_isalnum('A'));
	printf("isalnum('A'):\t\t[%d]\n", isalnum('A'));


	printf("\nft_isalnum('5'):\t[%d]\n", ft_isalnum('5'));
	printf("isalnum('5'):\t\t[%d]\n", isalnum('5'));

	printf("\nft_isalnum('!'):\t[%d]\n", ft_isalnum('!'));
	printf("isalnum('!'):\t\t[%d]\n", isalnum('!'));

	printf("------------------------------------------------------------------------------------\n");
	//FT_ISASCII TEST
	printf("ft_isascii('!'):\t[%d]\n", ft_isascii('!'));
	printf("isascii('!'):\t\t[%d]\n", isascii('!'));

	printf("\nft_isascii(-1):\t\t[%d]\n", ft_isascii(-1));
	printf("isascii(-1):\t\t[%d]\n", isascii(-1));

	printf("\nft_isascii(127):\t[%d]\n", ft_isascii(127));
	printf("isascii(127):\t\t[%d]\n", isascii(127));
	printf("------------------------------------------------------------------------------------\n");
	//FT_ISPRINT TEST
	printf("ft_isprint('~'):\t[%d]\n", ft_isprint('~'));
	printf("isprint('~'):\t\t[%d]\n", isprint('~'));

	printf("\nft_isprint(' '):\t[%d]\n", ft_isprint(' '));
	printf("isprint(' '):\t\t[%d]\n", isprint(' '));

	printf("\nft_isprint(' ' - 1):\t[%d]\n", ft_isprint(' ' - 1));
	printf("isprint(' ' - 1):\t[%d]\n", isprint(' ' - 1));
	printf("------------------------------------------------------------------------------------\n");
	//FT_STRLEN TEST
	printf("ft_strlen('Hello'):\t[%zu]\n", ft_strlen("Hello"));
	printf("strlen('Hello'):\t[%zu]\n", strlen("Hello"));

	printf("\nft_strlen(''):\t\t[%zu]\n", ft_strlen(""));
	printf("strlen(''):\t\t[%zu]\n", strlen(""));
	printf("------------------------------------------------------------------------------------\n");
	//FT_MEMSET TEST
	char str1[20] = "hello world";
	char str2[20] = "hello world";
	int c = '+';
	size_t n = 5;

        memset(str2,  c, n);
	ft_memset(str1, c, n);
	printf("ft_memset('hello world' , '+', 5):\t[%s]\n", str1);
	printf("memset('hello world', '+', 5) :\t\t[%s]\n", str2);

	ft_memset(str1, 'A', 3);
        memset(str2,  'A', 3);
	printf("ft_memset('+++++ world' , 'A', 3):\t[%s]\n", str1);
	printf("memset('+++++ world', 'A', 3) :\t\t[%s]\n", str2);

	printf("------------------------------------------------------------------------------------\n");
	//FT_BZERO TEST
	ft_bzero(str1, 1);
	ft_bzero(str2, 1);
	printf("ft_bzero:\t\t[%s]\n", str1);
	printf("bzero:\t\t\t[%s]\n", str2);
	printf("------------------------------------------------------------------------------------\n");
        char *src = "Hello world";
	char dest1[100];
	char dest2[100];
	size_t m = 5;

	ft_memcpy(dest1, src, m);
	memcpy(dest2, src, m);
	printf("ft_memcpy:\t\t[%s]\n", dest1);
	printf("memcpy:\t\t\t[%s]\n", dest2);
	printf("------------------------------------------------------------------------------------\n");
	//MEMMOVE TEST

	char buffer1[50] = {0};
	char buffer2[50] = {0};
	char memmove_str[] = "Hello world! Memmove test string";
	memmove(buffer1, memmove_str, 7);
	ft_memmove(buffer2, memmove_str, 7);
	printf("ft_memmove:\t\t[%s]\n", buffer2);
	printf("memmove:\t\t[%s]\n", buffer1);


	ft_bzero(buffer1, 50);
	ft_bzero(buffer2, 50);
	ft_memmove(buffer2 + 2, memmove_str, 5);
	memmove(buffer1 + 2, memmove_str, 5);
	printf("\nft_memmove:\t\t[%s]\n", buffer2);
	printf("memmove:\t\t[%s]\n", buffer1);

	ft_bzero(buffer1, 50);
	ft_bzero(buffer2, 50);
	ft_memmove(buffer2, memmove_str + 2, 7);
	memmove(buffer1, memmove_str + 2, 7);
	printf("\nft_memmove:\t\t[%s]\n", buffer2);
	printf("memmove:\t\t[%s]\n", buffer1);

	printf("------------------------------------------------------------------------------------\n");

	char	strlcpy_des1[10];
	char	strlcpy_des2[10];
	char	strlcpy_src[] = "Hello";

	printf("ft_strlcpy:\t\t[%zu]\n", ft_strlcpy(strlcpy_des1, strlcpy_src, 0));
	printf("strlcpy:\t\t[%zu]\n", strlcpy(strlcpy_des2, strlcpy_src, 0));

	ft_memset(strlcpy_des1, 'A', 4);
	memset(strlcpy_des2, 'A', 4);
	printf("\nft_strlcpy:\t\t[%zu]\n", ft_strlcpy(strlcpy_des1, "1", 50));
	printf("strlcpy:\t\t[%zu]\n", strlcpy(strlcpy_des2, "1", 50));

	printf("------------------------------------------------------------------------------------\n");

	char	strlcat_des1[20] = "bbbb";
	char	strlcat_des2[20] = "bbbb";
	char	*strlcat_src = "AAAAAA";

	printf("ft_strlcat:\t\t[%zu]\n", ft_strlcat(strlcat_des1, strlcat_src, 25));
	printf("strlcat:\t\t[%zu]\n", strlcat(strlcat_des2, strlcat_src, 25));

	char	strlcat_des12[30] = "hello world";
	char	strlcat_des22[30] = "hello world";
	printf("\nft_strlcat:\t\t[%zu]\n", ft_strlcat(strlcat_des12, strlcat_src, 0));
	printf("strlcat:\t\t[%zu]\n", strlcat(strlcat_des22, strlcat_src, 0));

	printf("------------------------------------------------------------------------------------\n");

	printf("ft_toupper('a'):\t[%d]\n", ft_toupper('a'));
	printf("toupper('a'):\t\t[%d]\n", toupper('a'));

	printf("\nft_toupper('a'-1):\t[%d]\n", ft_toupper('a' - 1));
	printf("toupper('a'-1):\t\t[%d]\n", ft_toupper('a' - 1));

	printf("------------------------------------------------------------------------------------\n");
	printf("ft_tolower('A'):\t[%d]\n", ft_tolower('A'));
	printf("tolower('A'):\t\t[%d]\n", tolower('A'));

	printf("\nft_tolower('A'-1):\t[%d]\n", ft_tolower('A'-1));
	printf("tolower('A'-1):\t\t[%d]\n", ft_tolower('A'-1));
	printf("------------------------------------------------------------------------------------\n");

	const char *chr = "Hello world!";

	printf("ft_strchr:\t\t[%s]\n", ft_strchr(chr, 'o'));
	printf("strchr:\t\t\t[%s]\n", strchr(chr, 'o'));

	printf("\nft_strchr:\t\t[%s]\n", ft_strchr(chr, 'a'));
	printf("strchr:\t\t\t[%s]\n", strchr(chr, 'a'));
	printf("------------------------------------------------------------------------------------\n");

	printf("ft_strrchr:\t\t[%s]\n", ft_strrchr(chr, 'o'));
	printf("strrchr:\t\t[%s]\n", strrchr(chr, 'o'));

	printf("\nft_strrchr:\t\t[%s]\n", ft_strrchr(chr, 'a'));
	printf("strrchr:\t\t[%s]\n", strrchr(chr, 'a'));
	printf("------------------------------------------------------------------------------------\n");

	printf("ft_strncmp:\t\t[%d]\n", ft_strncmp("hello", "hello", 5));
	printf("strncmp:\t\t[%d]\n", strncmp("hello", "hello", 5));

	printf("\nft_strncmp:\t\t[%d]\n", ft_strncmp("hello", "world", 5));
	printf("strncmp:\t\t[%d]\n", strncmp("hello", "world", 5));

	printf("\nft_strncmp:\t\t[%d]\n", ft_strncmp("help", "ahelp", 10));
	printf("strncmp:\t\t[%d]\n", strncmp("help", "ahelp", 10));
	printf("------------------------------------------------------------------------------------\n");

	char	*memchr_1 = "Hello world";
	char	*memchr_2 = "Hello world";

	printf("ft_memchr:\t\t[%p]\n", ft_memchr(memchr_1, 'o', sizeof(memchr_1)));
	printf("memchr:\t\t\t[%p]\n", memchr(memchr_2, 'o', sizeof(memchr_2)));

	printf("\nft_memchr:\t\t[%p]\n", ft_memchr(memchr_1, 'z', sizeof(memchr_1)));
	printf("memchr:\t\t\t[%p]\n", memchr(memchr_2, 'z', sizeof(memchr_2)));

	printf("\nft_memchr:\t\t[%p]\n", ft_memchr(memchr_1, '\0', sizeof(memchr_1)));
	printf("memchr:\t\t\t[%p]\n", memchr(memchr_2, '\0', sizeof(memchr_2)));

	printf("------------------------------------------------------------------------------------\n");

	printf("ft_memcmp:\t\t[%d]\n", ft_memcmp("hello", "hello", 5));
	printf("memcmp:\t\t\t[%d]\n", memcmp("hello", "hello", 5));

	printf("\nft_memcmp:\t\t[%d]\n", ft_memcmp("banana", "anana", 10));
	printf("memcmp:\t\t\t[%d]\n", memcmp("banana", "anana", 10));

	printf("\nft_memcmp:\t\t[%d]\n", ft_memcmp("", "hello", 5));
	printf("ft_memcmp:\t\t[%d]\n", memcmp("", "hello", 5));
	printf("------------------------------------------------------------------------------------\n");

	char *haystack = "hello world! needle in a haystack";

	printf("ft_strnstr:\t\t[%s]\n", ft_strnstr(haystack, "in", 25));
	printf("strnstr:\t\t[%s]\n", strnstr(haystack, "in", 25));

	printf("\nft_strnstr:\t\t[%s]\n", ft_strnstr(haystack, "World", 50));
	printf("strnstr:\t\t[%s]\n", strnstr(haystack, "World", 50));

	printf("\nft_strnstr:\t\t[%s]\n", ft_strnstr(haystack, "z", 50));
	printf("strnstr:\t\t[%s]\n", strnstr(haystack, "z", 50));
	printf("------------------------------------------------------------------------------------\n");

	printf("ft_atoi:\t\t[%d]\n", ft_atoi("-2147483648"));
	printf("atoi:\t\t\t[%d]\n", atoi("-2147483648"));

	printf("\nft_atoi:\t\t[%d]\n", ft_atoi("   00483648"));
	printf("atoi:\t\t\t[%d]\n", atoi("   00483648"));

	printf("\nft_atoi:\t\t[%d]\n", ft_atoi("9999999999999999999"));
	printf("atoi:\t\t\t[%d]\n", atoi("9999999999999999999"));

	printf("------------------------------------------------------------------------------------\n");

	printf("ft_calloc:\t\t[%p]\n", ft_calloc(2, 3));
	printf("calloc:\t\t\t[%p]\n", calloc(2, 3));

	printf("------------------------------------------------------------------------------------\n");

	char	*strdup_src = "String to duplicate";
	char	*res1 = "aaa", *res2 = "aaa";

	printf("before:\t\t\t[%s] | [%s]\n", res1, res2);
	res1 = ft_strdup(strdup_src);
	res2 = strdup(strdup_src);
	printf("ft_strdup:\t\t[%s]\n", res1);
	printf("strdup:\t\t\t[%s]\n", res2);
	free(res1);
	free(res2);

	printf("------------------------------------------------------------------------------------\n");

	char	*substr_src = "Hello world! Find a substring";
	printf("ft_substr:\t\t[%s]\n", ft_substr(substr_src, 0, 6));
	printf("ft_substr:\t\t[%s]\n", ft_substr(substr_src, 15, 8));
	printf("ft_substr:\t\t[%s]\n", ft_substr(substr_src, 50, 50));
	printf("ft_substr:\t\t[%s]\n", ft_substr(substr_src, 0, 0));

	printf("------------------------------------------------------------------------------------\n");

	printf("ft_strjoin:\t\t[%s]\n", ft_strjoin("Hello", "World"));
	printf("ft_strjoin:\t\t[%s]\n", ft_strjoin("", "World"));
	printf("ft_strjoin:\t\t[%s]\n", ft_strjoin("Hello", ""));

	printf("------------------------------------------------------------------------------------\n");

	printf("ft_strtrim:\t\t[%s]\n", ft_strtrim("    Hello     World    ", " "));
	printf("ft_strtrim:\t\t[%s]\n", ft_strtrim("xxx---Hello--xx--World---xxx", "x-"));
	printf("ft_strtrim:\t\t[%s]\n", ft_strtrim("ooooHelloooooo Worldooo", "abco"));
	printf("ft_strtrim:\t\t[%s]\n", ft_strtrim("Hello     World Hello", "Hello"));
	printf("ft_strtrim:\t\t[%s]\n", ft_strtrim("aaaaaaaaaaaaaa", "a"));

	printf("------------------------------------------------------------------------------------\n");

	char	*to_split = "Hello,world,help,apple";
	char **split_res = ft_split(to_split, ',');
	printf("string to split:\t[%s]\n\t\t\t", to_split);
	for (int i = 0; split_res[i]; i++)
		printf("[%s] ", split_res[i]);
	to_split = "no_delimiters_here";
	split_res = ft_split(to_split, ' ');
	printf("\nstring to split:\t[%s]\n\t\t\t", to_split);
	for (int i = 0; split_res[i]; i++)
		printf("[%s] ", split_res[i]);
	to_split = ",,,,hello,,,world,,,";
	split_res = ft_split(to_split, ',');

	printf("\nstring to split:\t[%s]\n\t\t\t", to_split);
	for (int i = 0; split_res[i]; i++)
		printf("[%s] ", split_res[i]);
	to_split = "HelloaWorldaBBBBBaAAAA";
	split_res = ft_split(to_split, 'a');
	printf("\nstring to split:\t[%s]\n\t\t\t", to_split);
	for (int i = 0; split_res[i]; i++)
		printf("[%s] ", split_res[i]);

	printf("\n------------------------------------------------------------------------------------\n");

	printf("ft_itoa:\t\t[%s]\n", ft_itoa(-2147483648));
	printf("ft_itoa:\t\t[%s]\n", ft_itoa(2147483647));
	printf("ft_itoa:\t\t[%s]\n", ft_itoa(123456789));
	printf("ft_itoa:\t\t[%s]\n", ft_itoa(-123456789));

	printf("------------------------------------------------------------------------------------\n");

	char	*input = "abcdefghijklmnopqrstuvwxyz";
	printf("input:\t\t\t[%s]\n", input);
	printf("ft_strmapi:\t\t[%s]\n", ft_strmapi(input, &test_func));
	printf("------------------------------------------------------------------------------------\n");

	char	input1[] = "zyxwvutsrqponmlkjihgfedcba";
	printf("input:\t\t\t[%s]\n", input1);
	ft_striteri(input1, test_func1);
	printf("ft_striteri:\t\t[%s]\n", input1);
	printf("------------------------------------------------------------------------------------\n");
	printf("ft_putchar_fd('A', 1):\n");
	ft_putchar_fd('A', 1);
	printf("\nft_putchar_fd('+', 1):\n");
	ft_putchar_fd('+', 1);

	printf("\n------------------------------------------------------------------------------------\n");

	printf("ft_putstr_fd('Hello', 1):\n");
	ft_putstr_fd("Hello", 1);
	printf("\nft_putstr_fd('Testing ft_putstr', 1):\n");
	ft_putstr_fd("Testing ft_putstr", 1);

	printf("\n------------------------------------------------------------------------------------\n");
	printf("ft_putendl_fd('Hello', 1):\n");
	ft_putendl_fd("Hello", 1);
	printf("\nft_putendl_fd('Test123', 1):\n");
	ft_putendl_fd("Test123", 1);
	printf("------------------------------------------------------------------------------------\n");
	printf("ft_putnbr_fd(123456, 1):\n");
	ft_putnbr_fd(123456, 1);
	printf("\nft_putnbr_fd(999999999, 1):\n");
	ft_putnbr_fd(999999999, 1);
	printf("\n");
	return 0;
}
