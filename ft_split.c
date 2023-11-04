/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:20:23 by hsim              #+#    #+#             */
/*   Updated: 2023/11/04 18:55:11 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	countstr(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

int	str_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	char	**tab;

	if (!s)
		return (NULL);
	while (*s && s[0] == c)
		s++;
	tab = (char **)malloc((countstr(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	x = 0;
	while (countstr(s, c) > 0)
	{
		tab[x] = (char *)malloc((str_sep(s, c) + 1) * sizeof(char));
		i = 0;
		while (*s && *s != c)
			tab[x][i++] = *s++;
		tab[x][i] = '\0';
		while (*s == c)
			s++;
		x++;
	}
	tab[x] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char	**result;
	int		i;
	
	i = 0;
	result = ft_split("++++sasw++saww+sawaawa++++ ", '+'); 
	while (i < 5)
		printf("%s\n", result[i++]);
}
*/
/*
|note|
if malloc fails, return NULL
splitting s with c as delimiter
the array ends with a NULL pointer
*/
