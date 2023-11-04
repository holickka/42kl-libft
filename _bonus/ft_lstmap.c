/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:13:05 by hsim              #+#    #+#             */
/*   Updated: 2023/11/04 19:18:35 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;
	t_list	*delst;

	if (!lst || !f)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (NULL);
	newlst = temp;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			while (newlst)
			{
				delst = newlst;
				del(newlst->content);
				newlst = newlst->next;
				free(delst);
			}
			return (NULL);
		}	
		temp = temp->next;
		lst = lst->next;
	}
	return (newlst);
}
/*
#include <string.h>
#include <stdio.h>
void	ft_del(void *mylst);
t_list	*ft_lstnew(void *content);

{
	free(mylst);
}

void	*ft_write(void *initlst)
{
	initlst = strdup("Zero");
	return ((char *)initlst);
}

void	ft_lstprint(t_list *mylst)
{
	while (mylst->next)
	{
		printf("%s\n", (char *)mylst->content);
		mylst = mylst->next;
	}
	if (mylst)
		printf("%s\n", (char *)mylst->content);
}
int	main()
{
	t_list	*mylst1;
	t_list	*mylst2;
	t_list	*mylst3;

	mylst1 = ft_lstnew(strdup("Wha"));
	mylst2 = ft_lstnew(strdup("Second"));
	mylst3 = ft_lstnew(strdup("Third"));

	if (!mylst1 || !mylst2 || !mylst3)
		return (0);
	mylst1->next = mylst2;
	mylst2->next = mylst3;

	ft_lstmap(mylst1, &ft_write, &ft_del);
	ft_lstprint(mylst1);
}
*/