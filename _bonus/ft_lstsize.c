#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	t_list	*mylst1;

	mylst1 = NULL;
	ft_lstadd_front(&mylst1, (t_list *)malloc(sizeof(t_list)));
	ft_lstadd_front(&mylst1, (t_list *)malloc(sizeof(t_list)));

	printf("%d\n", ft_lstsize(mylst1));
}
*/
