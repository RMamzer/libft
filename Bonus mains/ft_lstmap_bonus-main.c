
#include "libft.h"
#include <stdio.h>

void print_list(t_list *head)
{
	while (head)
	{
		printf("%s -> ", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

void	eliminator(void *deletor)
{
	free(deletor);
}

void	*maximizer(void *tobeup)
{
	char *str = (char *)tobeup;
	char *upper = ft_strdup(str);
	int i = 0;
	while (upper[i])
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
			upper[i] -= 32;
		i++;
	}
	return (upper);
}

int main(void)
{
	// Original list: "one" -> "two" -> "three"
	t_list *original = ft_lstnew(ft_strdup("one"));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("three")));

	printf("Original list:\n");
	print_list(original);

	// Map the list using maximizer
	t_list *mapped = ft_lstmap(original, maximizer, eliminator);

	printf("\nMapped list:\n");
	print_list(mapped);

	// Clean up
	ft_lstclear(&original, eliminator);
	ft_lstclear(&mapped, eliminator);

	return (0);
}
