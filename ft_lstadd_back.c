/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:07:36 by hsim              #+#    #+#             */
/*   Updated: 2023/11/04 19:32:15 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
}
/*
#include <stdio.h>
int	ft_lstsize(t_list *lst);
int	main()
{
	t_list	*mylst1;

	mylst1 = NULL;
	ft_lstadd_back(&mylst1, (t_list *)malloc(sizeof(t_list)));
	ft_lstadd_back(&mylst1, (t_list *)malloc(sizeof(t_list)));
	ft_lstadd_back(&mylst1, (t_list *)malloc(sizeof(t_list)));

	printf("%d\n", ft_lstsize(mylst1));
}
*/
