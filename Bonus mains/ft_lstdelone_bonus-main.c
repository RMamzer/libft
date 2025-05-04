
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

void	deleterminator(void *deletor)
{
	free(deletor);
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
	ft_lstadd_back(&list, node3);
	//Should print node 2, node 1 and node 3

	printf("List before deleting node 3:\n");
	print_list(list);  // Print the original list (before deletion)
	ft_lstdelone(node3, deleterminator); //deleting node3
	node1->next = NULL; //updating the node2.next to NULL
	printf("List after deleting node 3:\n");
	print_list(list);

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
