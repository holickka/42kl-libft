#include "libft.h"
/*
typedef	struct		s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;
	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist)
	{
		newlist->content = content;
		newlist->next = NULL;
		return (newlist);
	}
	return (NULL);
}
/*
#include <stdio.h>

void	ft_printlist(t_list *content)
{
	printf("%s\n", (char *)content);
}
int	main()
{
	char c[] = "Linkedlist";
	ft_printlist(ft_lstnew(c));
}
*/
