#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void *content);

#include <stdio.h>
int	main()
{
	t_list	*mylst1;
	t_list	*mylst3;

	mylst1 = NULL;

	ft_lstadd_front(&mylst1, (t_list *)malloc(sizeof(t_list)));
	ft_lstadd_front(&mylst1, (t_list *)malloc(sizeof(t_list)));

/*	mylst3 = ft_lstlast(mylst1);
	mylst3->content = "Hello";
	mylst3->next = NULL;
*/
	mylst3 = ft_lstnew("Hello");
	ft_lstlast(mylst1)->next = mylst3;

	printf("%s\n", (char *)(ft_lstlast(mylst1)->content));
	printf("%d\n", ft_lstsize(mylst1));

}
