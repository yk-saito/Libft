#include <stdio.h>
#include "libft.h"

void	ft_print(void* content)
{
	printf("[%s]\n", content);
	return ;
}

void	*ft_add_str(void* content)
{
	char *join_str = ft_strjoin(content, "world");
	content = join_str;
	return (content);
}

void	lstadd_front(t_list *lst, t_list *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = lst;
	lst = new;
}

int	main(int argc, char** argv)
{
	t_list	*list = ft_lstnew(argv[1]);
	t_list	*list2 = ft_lstnew(argv[2]);
	t_list	*list3 = ft_lstnew(argv[3]);

	ft_lstadd_back(&list, list2);
	ft_lstadd_front(&list, list3);

	int	size = ft_lstsize(list);
	printf("list size=[%d]\n\n", size);
	t_list	*tmp =  list;
	for (int i = 0; tmp != NULL; i++)
	{
		printf("[%d]=[%s]\n", i, tmp->content);
		tmp = tmp->next;
	}

	t_list *new_list = ft_lstmap(list, &ft_add_str, free);

	tmp = new_list;
	for (int i = 0; tmp != NULL; i++)
	{
		printf("[%d]=[%s]\n", i, tmp->content);
		tmp = tmp->next;
	}

	// ft_lstiter(list, ft_print);

	// t_list *last = ft_lstlast(list);
	// printf("last=[%s]\n", last->content);

	// ft_lstclear(&list, free);

	// system("leaks a.out");
	// t_list    *test;
    // t_list    *new;

    // test = ft_lstnew(5);
    // new = ft_lstnew(3);
    // printf("before test = %p\n", test);
    // lstadd_front(test, new);
    // printf("after new = %p\n", new);
    // printf("after test = %p\n", test);

	return (0);
}
