#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	lst->next = NULL;
	free(lst);
}

void	ft_del(void *myList)
{
	free(myList);
}

int	ft_lstsize(t_list *lst);
#include <stdio.h>
#include <string.h>
int	main()
{
	t_list	*mylst1;
	t_list	*mylst2;
	t_list	*mylst3;

	mylst1 = (t_list *)malloc(sizeof(t_list));
	mylst2 = (t_list *)malloc(sizeof(t_list));
	mylst3 = (t_list *)malloc(sizeof(t_list));

	mylst1->content = strdup("Holaa");
	mylst1->next = mylst2;	
	mylst2->content = strdup("Wee");
	mylst2->next = mylst3;
	mylst3->next = NULL;

	printf("%d\n",ft_lstsize(mylst1));
	ft_lstdelone(mylst2, &ft_del);
	printf("%d\n",ft_lstsize(mylst1));
}
