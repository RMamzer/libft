
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

int main(void)
{
	//Create the last element
	t_list *list = NULL;

	//Creating new nodes
	t_list *node1 = ft_lstnew(ft_strdup("This is node 1"));
	t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list *node3 = ft_lstnew(ft_strdup("Bergamota 3"));

	//Linking them together
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	print_list(list);
	printf("Size: %d\n", ft_lstsize(list)); //print the size of list

	// Free all allocated memory
	t_list *temp;
	while (list)
	{
		temp = list->next;
		free(list->content);
		free(list);
		list = temp;
	}

	return 0;
}
