/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:46:28 by dlytvync          #+#    #+#             */
/*   Updated: 2025/04/30 11:55:46 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*create_list(int size)
{
	if (size <= 0) return NULL;
	t_list	*head = ft_lstnew("a");
	t_list	*current = head;
	for (int i = 1; i < size; i++)
	{
		current->next = ft_lstnew("a");
		current = current->next;
	}
	return (head);
}
char	*create_string(const char *str) {
    	char *copy = malloc(strlen(str) + 1);
    	if (copy) strcpy(copy, str);
    	return copy;
}
void	del(void *content)
{
	free(content);
}

t_list	*create_string_list(const char **strings, int count) {
	t_list *head = NULL;
    	t_list **current = &head;

    	for (int i = 0; i < count; i++) {
        	*current = ft_lstnew(strdup(strings[i]));
        	if (!*current) {
            		ft_lstclear(&head, del);
           		return NULL;
        	}
        	current = &(*current)->next;
    		}
    	return head;
}
void	print_string(void *content) {
    	printf("%s --> ", (char *)content);
}

void	*uppercase(void *content)
{
	char *str =strdup((char *)content);
	if (!str) return (NULL);
	for (int i = 0; str[i]; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return str;
}
int	main()
{
	printf("-------------------LSTNEW-------------------------\n");
	t_list	*test = ft_lstnew("Hello");
	printf("List content:\t\t[%s]", (char *)test->content);
	printf("\n------------------LSTADD_FRONT--------------------\n");
	t_list	*list = ft_lstnew("start");
	t_list *new1 = ft_lstnew("three");
	t_list *new2 = ft_lstnew("two");
	t_list *new3 = ft_lstnew("one");

	ft_lstadd_front(&list, new1);
	ft_lstadd_front(&list, new2);
	ft_lstadd_front(&list, new3);
	while (list)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("\n------------------LSTSIZE-------------------------\n");

	t_list	*size3 = create_list(3);
	printf("size:\t\t\t[%d]", ft_lstsize(size3));
	printf("\n------------------LSTLAST-------------------------\n");
	t_list	*list1 = NULL;
	t_list	*first = ft_lstnew("first");
	t_list	*second = ft_lstnew("second");
	t_list	*third = ft_lstnew("third");

	ft_lstadd_front(&list1, first);
	ft_lstadd_front(&list1, second);
	ft_lstadd_front(&list1, third);

	t_list *last = ft_lstlast(list1);
	printf("Last:\t\t\t[%s]", (char *)last->content);
	printf("\n------------------LSTADD_BACK---------------------\n");

	t_list	*list2 = ft_lstnew("start");
	t_list	*back1 = ft_lstnew("+1");
	t_list	*back2 = ft_lstnew("+2");
	t_list	*back3 = ft_lstnew("+3");

	ft_lstadd_back(&list2, back1);
	ft_lstadd_back(&list2, back2);
	ft_lstadd_back(&list2, back3);
	while (list2)
	{
		printf("%s -> ", (char *)list2->content);
		list2 = list2->next;
	}
	printf("\n------------------LSTDELONE-----------------------\n");
	t_list *list3 = ft_lstnew(create_string("First"));
	list3->next = ft_lstnew(create_string("Second"));

   	printf("Before deletion:\n");
    	t_list *current = list3;
    	while (current) {
		printf("%s -> ", (char *)current->content);
       		current = current->next;
   	 }

   	t_list *to_delete = list3;
    	list3 = list3->next;
    	ft_lstdelone(to_delete, del);

    	printf("\nAfter deletion:\n");
    	current = list3;
    	while (current) {
        	printf("%s -> ", (char *)current->content);
        	current = current->next;
    	}
	printf("\n------------------LSTCLEAR------------------------\n");

	const char *strs[] = {"abc", "def", "ghi", "jkl"};
	t_list *list4 = create_string_list(strs, 4);
	while (list4)
	{
		printf("%s -> ", (char *)list4->content);
		list4 = list4->next;
	}
	ft_lstclear(&list4, del);
	if (list4 == NULL)
		printf("\nall cleared");
	printf("\n------------------LSTITER-------------------------\n");
	t_list	*list5 = create_string_list(strs, 4);
	printf("string:\t");
	ft_lstiter(list5, print_string);
	printf("\n------------------LSTMAP--------------------------\n");
	t_list	*list6 = create_string_list(strs, 4);
	t_list	*mapres = ft_lstmap(list6, uppercase, del);
	ft_lstiter(mapres, print_string);
	return (0);
}
