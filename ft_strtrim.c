/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:20:08 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 20:20:09 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_last(char const *s1, char const *set)
{
	size_t	lenstr;
	size_t	lenset;

	lenstr = ft_strlen(s1);
	lenset = ft_strlen(set);
	while (lenstr > 0 && s1[lenstr] == set[lenset])
	{
		lenstr--;
		lenset--;
	}
	return (lenstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	char	*tab;

	i = 0;
	a = 0;
	while (s1[i] && s1[i] == set[i])
		i++;
	if (is_last(s1, set) != 0)
	{
		tab = (char *)malloc(sizeof(s1));
		if (tab != NULL)
		{
			while (i <= is_last(s1, set))
				tab[a++] = s1[i++];
			tab[a] = '\0';
			return (tab);
		}
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strtrim("i", "i"));
}
*/
/*
|note|
trim string when set is detected
remove beginning & end of s1 if set is detected there
if allocation success, return trimmed string
if allocation failed, return NULL
*/
