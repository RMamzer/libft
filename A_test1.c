// These lines silence warnigs caused by passing weird arguments to memset and
// bzero.
#pragma GCC diagnostic ignored "-Wmemset-transposed-args"
#ifdef __clang__
#pragma GCC diagnostic ignored "-Wsuspicious-bzero"
#endif

#include <bsd/string.h>
#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "libft.h"

// ANSI escape codes.
#define ANSI_GREEN "\e[1;32m" // Sets the text color to green.
#define ANSI_RED   "\e[1;31m" // Sets the text color to red.
#define ANSI_RESET "\e[0m"    // Reset to default color.
#define ANSI_CLEAR "\e[2J"    // Clear the screen.

// Color-coded OK and KO strings.
#define GREEN_OK (ANSI_GREEN "[OK]" ANSI_RESET)
#define RED_KO   (ANSI_RED   "[KO]" ANSI_RESET)

// Assert with a custom message (same syntax as printf).
#define ASSERT_MSG(condition, ...) do { \
		int succeeded = (condition) != 0; \
		printf("    %s ", succeeded ? GREEN_OK : RED_KO); \
		printf(__VA_ARGS__); \
		printf("\n"); \
		failed += !succeeded; \
		tested++; \
	} while (0)

// Assert with the condition as the message.
#define ASSERT(condition) ASSERT_MSG(condition, #condition)

// Print a summary of passes/failures at the end of each section.
#define SUMMARY() do { \
		printf("%d/%d tests passed ", tested - failed, tested); \
		printf("%s\n", failed == 0 ? GREEN_OK : RED_KO); \
		total_tested += tested; \
		total_failed += failed; \
	} while (0)

// Begin a new section by printing its title, and also reset the pass/fail
// counters.
#define SECTION(title) do { \
		if (tested > 0) { \
			SUMMARY(); \
		} \
		printf("\n%s\n", title); \
		tested = failed = 0; \
	} while (0)

// Counters for keeping track how many test passed or failed, per section and
// in total.
static int tested, total_tested;
static int failed, total_failed;

// Convert a character to uppercase. Used for testing ft_strmapi.
static char uppercase(unsigned int index, char chr)
{
	return ft_toupper(chr);
}

// Convert a character to uppercase via a pointer. Used for testing ft_striteri.
static void uppercase_in_place(unsigned int index, char* chr)
{
	*chr = ft_toupper(*chr);
}

// Increment an integer via a pointer. Used for testing the linked list
// functions.
static void increment_int(void *pointer)
{
	*((int*) pointer) += 1;
}

static void test_strlcpy(const char *dst, const char *src, size_t length)
{
	char buffer_a[100];
	char buffer_b[100];
	memset(buffer_a, 'A', sizeof(buffer_a));
	memset(buffer_b, 'A', sizeof(buffer_b));
	strcpy(buffer_a, dst);
	strcpy(buffer_b, dst);
	size_t return_a =    strlcpy(buffer_a, src, length);
	size_t return_b = ft_strlcpy(buffer_b, src, length);
	ASSERT_MSG(return_a == return_b, "ft_strlcpy(\"%s\", \"%s\", %zu) == strlcpy(\"%s\", \"%s\", %zu)", dst, src, length, dst, src, length);
	ASSERT(memcmp(buffer_a, buffer_b, sizeof(buffer_a)) == 0);
}

static void test_strlcat(const char *dst, const char *src, size_t length)
{
	enum {N = 100};
	char buffer_a[N];
	char buffer_b[N];
	memset(buffer_a, 'A', N);
	memset(buffer_b, 'A', N);
	strcpy(buffer_a, dst);
	strcpy(buffer_b, dst);
	size_t return_a =    strlcat(buffer_a, src, length);
	size_t return_b = ft_strlcat(buffer_b, src, length);
	ASSERT_MSG(return_a == return_b && memcmp(buffer_a, buffer_b, N) == 0, "ft_strlcat(\"%s\", \"%s\", %zu) == strlcat(\"%s\", \"%s\", %zu)", dst, src, length, dst, src, length);
}

// Return -1 if x is negative, 1 if it's positive, and 0 otherwise.
static int sign(int x)
{
	return (x > 0) - (x < 0);
}

int main()
{
	printf(ANSI_CLEAR); // Clear the screen.

	SECTION("ft_isalpha");
	{
		ASSERT(!!ft_isalpha('a') == !!isalpha('a'));
		ASSERT(!!ft_isalpha('A') == !!isalpha('A'));
		ASSERT(!!ft_isalpha('5') == !!isalpha('5'));
		ASSERT(!!ft_isalpha('\0') == !!isalpha('\0'));
		ASSERT(!!ft_isalpha(' ') == !!isalpha(' '));
		ASSERT(!!ft_isalpha('~') == !!isalpha('~'));
		ASSERT(!!ft_isalpha(0x7f) == !!isalpha(0x7f));
		ASSERT(!!ft_isalpha(-1) == !!isalpha(-1));
	}

	SECTION("ft_isdigit");
	{
		ASSERT(!!ft_isdigit('a') == !!isdigit('a'));
		ASSERT(!!ft_isdigit('A') == !!isdigit('A'));
		ASSERT(!!ft_isdigit('5') == !!isdigit('5'));
		ASSERT(!!ft_isdigit('\0') == !!isdigit('\0'));
		ASSERT(!!ft_isdigit(' ') == !!isdigit(' '));
		ASSERT(!!ft_isdigit('~') == !!isdigit('~'));
		ASSERT(!!ft_isdigit(0x7f) == !!isdigit(0x7f));
		ASSERT(!!ft_isdigit(-1) == !!isdigit(-1));
	}

	SECTION("ft_isalnum");
	{
		ASSERT(!!ft_isalnum('a') == !!isalnum('a'));
		ASSERT(!!ft_isalnum('A') == !!isalnum('A'));
		ASSERT(!!ft_isalnum('5') == !!isalnum('5'));
		ASSERT(!!ft_isalnum('\0') == !!isalnum('\0'));
		ASSERT(!!ft_isalnum(' ') == !!isalnum(' '));
		ASSERT(!!ft_isalnum('~') == !!isalnum('~'));
		ASSERT(!!ft_isalnum(0x7f) == !!isalnum(0x7f));
		ASSERT(!!ft_isalnum(-1) == !!isalnum(-1));
	}

	SECTION("ft_isascii");
	{
		ASSERT(!!ft_isascii('a') == !!isascii('a'));
		ASSERT(!!ft_isascii('A') == !!isascii('A'));
		ASSERT(!!ft_isascii('5') == !!isascii('5'));
		ASSERT(!!ft_isascii('\0') == !!isascii('\0'));
		ASSERT(!!ft_isascii(' ') == !!isascii(' '));
		ASSERT(!!ft_isascii('~') == !!isascii('~'));
		ASSERT(!!ft_isascii(0x7f) == !!isascii(0x7f));
		ASSERT(!!ft_isascii(-1) == !!isascii(-1));
	}

	SECTION("ft_isprint");
	{
		ASSERT(!!ft_isprint('a') == !!isprint('a'));
		ASSERT(!!ft_isprint('A') == !!isprint('A'));
		ASSERT(!!ft_isprint('5') == !!isprint('5'));
		ASSERT(!!ft_isprint('\0') == !!isprint('\0'));
		ASSERT(!!ft_isprint(' ') == !!isprint(' '));
		ASSERT(!!ft_isprint('~') == !!isprint('~'));
		ASSERT(!!ft_isprint(0x7f) == !!isprint(0x7f));
		ASSERT(!!ft_isprint(-1) == !!isprint(-1));
	}

	SECTION("ft_strlen");
	{
		ASSERT(ft_strlen("abc") == strlen("abc"));
		ASSERT(ft_strlen("hello") == strlen("hello"));
		ASSERT(ft_strlen("") == strlen(""));
	}

	SECTION("ft_memset");
	{
		char a[10] = {0};
		char b[10] = {0};
		ASSERT(memcmp(memset(a, 'b', 5), ft_memset(b, 'a', 5), 10) != 0);
		ASSERT(memcmp(memset(a, 'a', 8), ft_memset(b, 'a', 8), 10) == 0);
		ASSERT(memcmp(memset(a, 'c', 0), ft_memset(b, 'c', 0), 10) == 0);
	}

	SECTION("ft_bzero");
	{
		char a[10] = {0};
		char b[10] = {0};
		memset(a, 'a', sizeof(a));
		memset(b, 'a', sizeof(b));
		bzero(a, 0);
		ft_bzero(b, 0);
		ASSERT(memcmp(a, b, sizeof(a)) == 0);
		bzero(a, 5);
		ft_bzero(b, 5);
		ASSERT(memcmp(a, b, sizeof(a)) == 0);
		bzero(a, sizeof(a));
		ft_bzero(b, sizeof(b));
		ASSERT(memcmp(a, b, sizeof(a)) == 0);
	}

	SECTION("ft_memcpy");
	{
		char a[10] = {0};
		memset(a, 'a', sizeof(a));
		ASSERT(memcmp(a, ft_memcpy(a, "hello", sizeof(a)), sizeof(a)) == 0);
		ASSERT(memcmp(a, ft_memcpy(a, "abc", sizeof(a)), sizeof(a)) == 0);
	}

	SECTION("ft_memmove");
	{
		enum {N = 10};
		char a[N] = {0};
		char b[N] = {0};
		ASSERT(ft_memmove(a, "abcdef", 6) && memmove(b, "abcdef", 6) && memcmp(a, b, N) == 0);
		ASSERT(ft_memmove(a, a + 1, 6) && memmove(b, b + 1, 6) && memcmp(a, b, N) == 0);
		ASSERT(ft_memmove(a + 1, a, 6) && memmove(b + 1, b, 6) && memcmp(a, b, N) == 0);
	}

	SECTION("ft_strlcpy");
	{
		test_strlcpy("abc", "def", 999);
		test_strlcpy("", "abcdef", 3);
		test_strlcpy("", "abc", 0);
	}

	SECTION("ft_strlcat");
	{
		test_strlcat("hi ", "four", 0);
		test_strlcat("words", "0123456", 5);
		test_strlcat("abc", "def", 2);
		test_strlcat("abc", "def", 3);
		test_strlcat("abc", "def", 4);
		test_strlcat("abc", "def", 5);
		test_strlcat("abc", "def", 6);
		test_strlcat("abc", "def", 7);
		test_strlcat("", " words", 6);
		test_strlcat("", " words", 5);
		test_strlcat("abc", " defghi", 0);
		test_strlcat("abc", " defghi", 1);
		test_strlcat("abc", "", 3);
		test_strlcat("abc", "", 0);
		test_strlcat("abc", "", 10);
		test_strlcat("", "", 0);
		test_strlcat("", "", 999);
	}

	SECTION("ft_toupper");
	{
		ASSERT(ft_toupper('a') == toupper('a'));
		ASSERT(ft_toupper('B') == toupper('B'));
		ASSERT(ft_toupper('5') == toupper('5'));
		ASSERT(ft_toupper(' ') == toupper(' '));
		ASSERT(ft_toupper(666) == toupper(666));
		ASSERT(ft_toupper(-1) == toupper(-1));
	}

	SECTION("ft_tolower");
	{
		ASSERT(ft_tolower('a') == tolower('a'));
		ASSERT(ft_tolower('B') == tolower('B'));
		ASSERT(ft_tolower('5') == tolower('5'));
		ASSERT(ft_tolower(' ') == tolower(' '));
		ASSERT(ft_tolower(666) == tolower(666));
		ASSERT(ft_tolower(-1) == tolower(-1));
	}

	SECTION("ft_strchr");
	{
		ASSERT(ft_strchr("banana", 'n') == strchr("banana", 'n'));
		ASSERT(ft_strchr("banana", 'X') == strchr("banana", 'X'));
		ASSERT(ft_strchr("banana", '\0') == strchr("banana", '\0'));
		ASSERT(ft_strchr("banana", 'n' + 256) == strchr("banana", 'n' + 256));
		ASSERT(ft_strchr("", '+') == strchr("", '+'));
		ASSERT(ft_strchr("", '\0') == strchr("", '\0'));
	}

	SECTION("ft_strrchr");
	{
		ASSERT(ft_strrchr("banana", 'n') == strrchr("banana", 'n'));
		ASSERT(ft_strrchr("banana", 'X') == strrchr("banana", 'X'));
		ASSERT(ft_strrchr("banana", '\0') == strrchr("banana", '\0'));
		ASSERT(ft_strrchr("banana", 'n' + 256) == strrchr("banana", 'n' + 256));
		ASSERT(ft_strrchr("", '+') == strrchr("", '+'));
		ASSERT(ft_strrchr("", '\0') == strrchr("", '\0'));
	}

	SECTION("ft_strncmp");
	{
		ASSERT(sign(ft_strncmp("abc", "abc", 3)) == sign(strncmp("abc", "abc", 3)));
		ASSERT(sign(ft_strncmp("ab_", "ab_", 2)) == sign(strncmp("ab_", "ab_", 2)));
		ASSERT(sign(ft_strncmp("ABC", "ABC", 999)) == sign(strncmp("ABC", "ABC", 999)));
		ASSERT(sign(ft_strncmp("abc", "abcX", 999)) == sign(strncmp("abc", "abcX", 999)));
		ASSERT(sign(ft_strncmp("abcX", "abc", 999)) == sign(strncmp("abcX", "abc", 999)));
		ASSERT(sign(ft_strncmp("", "", 999)) == sign(strncmp("", "", 999)));
		ASSERT(sign(ft_strncmp("", "", 0)) == sign(strncmp("", "", 0)));
		ASSERT(sign(ft_strncmp("abc\200", "abc\0", 6)) == sign(strncmp("abc\200", "abc\0", 6)));
	}

	SECTION("ft_memchr");
	{
		ASSERT(memchr("abc", 'b', 3) == ft_memchr("abc", 'b', 3));
		ASSERT(memchr("abc", '?', 3) == ft_memchr("abc", '?', 3));
		ASSERT(memchr("A\xffZ", 0xff, 3) == ft_memchr("A\xffZ", 0xff, 3));
		ASSERT(memchr("A\xffZ", 'Z', 3) == ft_memchr("A\xffZ", 'Z', 3));
		ASSERT(memchr("", 'X', 0) == ft_memchr("", 'X', 0));
	}

	SECTION("ft_memcmp");
	{
		ASSERT(sign(memcmp("abc", "abc", 3)) == sign(ft_memcmp("abc", "abc", 3)));
		ASSERT(sign(memcmp("abc", "ABC", 3)) == sign(ft_memcmp("abc", "ABC", 3)));
		ASSERT(sign(memcmp("ABC", "abc", 3)) == sign(ft_memcmp("ABC", "abc", 3)));
		ASSERT(sign(memcmp("abc", "ab", 2)) == sign(ft_memcmp("abc", "ab", 2)));
		ASSERT(sign(memcmp("", "", 0)) == sign(ft_memcmp("", "", 0)));
	}

	SECTION("ft_strnstr");
	{
		ASSERT(strnstr("abcdef", "def", 999) == ft_strnstr("abcdef", "def", 999));
		ASSERT(strnstr("abcdef", "XXX", 999) == ft_strnstr("abcdef", "XXX", 999));
		ASSERT(strnstr("abcdef", "def", 6) == ft_strnstr("abcdef", "def", 6));
		ASSERT(strnstr("abcdef", "def", 5) == ft_strnstr("abcdef", "def", 5));
		ASSERT(strnstr("abcdef", "def", 0) == ft_strnstr("abcdef", "def", 0));
		ASSERT(strnstr("abc", "", 999) == ft_strnstr("abc", "", 999));
		ASSERT(strnstr("", "abc", 999) == ft_strnstr("", "abc", 999));
		ASSERT(strnstr("", "", 999) == ft_strnstr("", "", 999));
	}

	SECTION("ft_atoi");
	{
		ASSERT(atoi("42") == ft_atoi("42"));
		ASSERT(atoi("0") == ft_atoi("0"));
		ASSERT(atoi("-666") == ft_atoi("-666"));
		ASSERT(atoi("+69") == ft_atoi("+69"));
		ASSERT(atoi("2147483647") == ft_atoi("2147483647"));
		ASSERT(atoi("-2147483648") == ft_atoi("-2147483648"));
		ASSERT(atoi("   +123abc") == ft_atoi("   +123abc"));
		ASSERT(atoi("-----1") == ft_atoi("-----1"));
		ASSERT(atoi("abc") == ft_atoi("abc"));
	}

	SECTION("ft_calloc");
	{
		size_t SIZE_MAX = 0xffffffffffffffffull;
		ASSERT(!ft_calloc(420, 69) == !calloc(420, 69));
		ASSERT(!ft_calloc(0, 0) == !calloc(0, 0));
		ASSERT(!ft_calloc(SIZE_MAX, 0) == !calloc(SIZE_MAX, 0));
		ASSERT(!ft_calloc(SIZE_MAX, 2) == !calloc(SIZE_MAX, 2));
		ASSERT(!ft_calloc(0, SIZE_MAX) == !calloc(0, SIZE_MAX));
		ASSERT(!ft_calloc(2, SIZE_MAX) == !calloc(2, SIZE_MAX));
		ASSERT(!ft_calloc(SIZE_MAX, SIZE_MAX) == !calloc(SIZE_MAX, SIZE_MAX));
	}

	SECTION("ft_strdup");
	{
		ASSERT(strcmp(strdup("hello"), ft_strdup("hello")) == 0);
		ASSERT(strcmp(strdup(""), ft_strdup("")) == 0);
	}

	SECTION("ft_substr");
	{
		ASSERT(strcmp(ft_substr("hello", 0, 4), "hell") == 0);
		ASSERT(strcmp(ft_substr("hello", 2, 2), "ll") == 0);
		ASSERT(strcmp(ft_substr("hello", 0, 999), "hello") == 0);
		ASSERT(strcmp(ft_substr("hello", 0, 0), "") == 0);
		ASSERT(strcmp(ft_substr("hello", 999, 1), "") == 0);
	}

	SECTION("ft_strjoin");
	{
		ASSERT(strcmp(ft_strjoin("abc", "def"), "abcdef") == 0);
		ASSERT(strcmp(ft_strjoin("abc", "d"), "abcd") == 0);
		ASSERT(strcmp(ft_strjoin("abc", ""), "abc") == 0);
		ASSERT(strcmp(ft_strjoin("", "def"), "def") == 0);
		ASSERT(strcmp(ft_strjoin("", ""), "") == 0);
	}

	SECTION("ft_strtrim");
	{
		ASSERT(strcmp(ft_strtrim("   abc   def   ", " "), "abc   def") == 0);
		ASSERT(strcmp(ft_strtrim("abc   ......", " ."), "abc") == 0);
		ASSERT(strcmp(ft_strtrim("abc", " .+"), "abc") == 0);
		ASSERT(strcmp(ft_strtrim("", ""), "") == 0);
	}

	SECTION("ft_split");
	{
		char **parts = ft_split("  one  two  three  ", ' ');
		ASSERT(parts != NULL);
		ASSERT(strcmp(parts[0], "one") == 0);
		ASSERT(strcmp(parts[1], "two") == 0);
		ASSERT(strcmp(parts[2], "three") == 0);
		ASSERT(parts[3] == NULL);

		char **empty = ft_split("    ", ' ');
		ASSERT(empty != NULL);
		ASSERT(empty[0] == NULL);
	}

	SECTION("ft_itoa");
	{
		ASSERT(strcmp(ft_itoa(42), "42") == 0);
		ASSERT(strcmp(ft_itoa(-666), "-666") == 0);
		ASSERT(strcmp(ft_itoa(0), "0") == 0);
		ASSERT(strcmp(ft_itoa(9), "9") == 0);
		ASSERT(strcmp(ft_itoa(10), "10") == 0);
		ASSERT(strcmp(ft_itoa(2147483647), "2147483647") == 0);
		ASSERT(strcmp(ft_itoa(-2147483648), "-2147483648") == 0);
	}

	SECTION("ft_strmapi");
	{
		ASSERT(strcmp(ft_strmapi("abcDEF", uppercase), "ABCDEF") == 0);
		ASSERT(strcmp(ft_strmapi("...", uppercase), "...") == 0);
		ASSERT(strcmp(ft_strmapi("", uppercase), "") == 0);
	}

	SECTION("ft_striteri");
	{
		char buffer[] = "abcDEF...";
		ft_striteri(buffer, uppercase_in_place);
		ASSERT(strcmp(buffer, "ABCDEF...") == 0);
	}

	SECTION("ft_putchar_fd");
	{
		char output[100] = {0};
		int fd = open("temp", O_RDWR | O_CREAT, 0777);
		ft_putchar_fd('4', fd);
		ft_putchar_fd('2', fd);
		lseek(fd, 0, SEEK_SET);
		read(fd, output, 2);
		ASSERT(strcmp(output, "42") == 0);
		unlink("temp");
		close(fd);
	}

	SECTION("ft_putstr_fd");
	{
		char output[100] = {0};
		int fd = open("temp", O_RDWR | O_CREAT, 0777);
		ft_putstr_fd("hello", fd);
		lseek(fd, 0, SEEK_SET);
		read(fd, output, strlen("hello"));
		ASSERT(strcmp(output, "hello") == 0);
		unlink("temp");
		close(fd);
	}

	SECTION("ft_putendl_fd");
	{
		char output[100] = {0};
		int fd = open("temp", O_RDWR | O_CREAT, 0777);
		ft_putendl_fd("hello", fd);
		lseek(fd, 0, SEEK_SET);
		read(fd, output, strlen("hello\n"));
		ASSERT(strcmp(output, "hello\n") == 0);
		unlink("temp");
		close(fd);
	}

	SECTION("ft_putnbr_fd");
	{
		char output[100] = {0};
		int fd = open("temp", O_RDWR | O_CREAT, 0777);
		ft_putnbr_fd(-12345, fd);
		lseek(fd, 0, SEEK_SET);
		read(fd, output, strlen("-12345"));
		ASSERT(strcmp(output, "-12345") == 0);
		unlink("temp");
		close(fd);
	}

	SECTION("ft_lstnew");
	{
		t_list *node = ft_lstnew((void*) 42);
		ASSERT(node != NULL);
		ASSERT(node->next == NULL);
		ASSERT(node->content == (void*) 42);
	}

	SECTION("ft_lstadd_front");
	{
		t_list *list = NULL;
		ft_lstadd_front(&list, ft_lstnew((void*) 3));
		ft_lstadd_front(&list, ft_lstnew((void*) 2));
		ft_lstadd_front(&list, ft_lstnew((void*) 1));
		ASSERT(list->content == (void*) 1);
		ASSERT(list->next->content == (void*) 2);
		ASSERT(list->next->next->content == (void*) 3);
	}

	SECTION("ft_lstsize");
	{
		t_list *list = NULL;
		ASSERT(ft_lstsize(list) == 0);
		ft_lstadd_front(&list, ft_lstnew((void*) 3));
		ASSERT(ft_lstsize(list) == 1);
		ft_lstadd_front(&list, ft_lstnew((void*) 2));
		ASSERT(ft_lstsize(list) == 2);
		ft_lstadd_front(&list, ft_lstnew((void*) 1));
		ASSERT(ft_lstsize(list) == 3);
	}

	SECTION("ft_lstlast");
	{
		t_list *list = NULL;
		ASSERT(ft_lstlast(list) == NULL);
		ft_lstadd_front(&list, ft_lstnew((void*) 3));
		ft_lstadd_front(&list, ft_lstnew((void*) 2));
		ft_lstadd_front(&list, ft_lstnew((void*) 1));
		ASSERT(ft_lstlast(list)->content == (void*) 3);
	}

	SECTION("ft_lstadd_back");
	{
		t_list *list = NULL;
		ft_lstadd_back(&list, ft_lstnew((void*) 1));
		ft_lstadd_back(&list, ft_lstnew((void*) 2));
		ft_lstadd_back(&list, ft_lstnew((void*) 3));
		ASSERT(list->content == (void*) 1);
		ASSERT(list->next->content == (void*) 2);
		ASSERT(list->next->next->content == (void*) 3);
	}

	SECTION("ft_lstdelone");
	{
		int nodes_deleted = 0;
		t_list *node = ft_lstnew(&nodes_deleted);
		ft_lstdelone(node, increment_int);
		ASSERT(nodes_deleted == 1);
	}

	SECTION("ft_lstclear");
	{
		int nodes_deleted = 0;
		t_list *list = NULL;
		ft_lstadd_back(&list, ft_lstnew(&nodes_deleted));
		ft_lstadd_back(&list, ft_lstnew(&nodes_deleted));
		ft_lstadd_back(&list, ft_lstnew(&nodes_deleted));
		ft_lstclear(&list, increment_int);
		ASSERT(nodes_deleted == 3);
	}

	SECTION("ft_lstiter");
	{
		int nodes_visited = 0;
		t_list *list = NULL;
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstiter(list, increment_int);
		ASSERT(nodes_visited == 3);
	}

	SECTION("ft_lstmap");
	{
		int nodes_visited = 0;
		t_list *list = NULL;
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstadd_back(&list, ft_lstnew(&nodes_visited));
		ft_lstiter(list, increment_int);
		ASSERT(nodes_visited == 3);
	}

	SUMMARY();
	printf("\nTOTAL: %d/%d tests passed ", total_tested - total_failed, total_tested);
	printf("%s\n", total_failed == 0 ? GREEN_OK : RED_KO);
}
