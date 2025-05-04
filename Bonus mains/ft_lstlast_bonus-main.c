
#include "libft.h"
#include <stdio.h>


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

	t_list *last = ft_lstlast(list);
	// print_list(list);
	printf("Size: %d\n", ft_lstsize(list)); //print the size of list
	printf("Last content: %s\n", (char *)last->content); // Should print "First"

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
