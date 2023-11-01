/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:17:40 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 20:18:27 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)malloc(sizeof(s1) - sizeof(char) + sizeof(s2));
	if (tab == NULL)
		return (NULL);
	while (*s1)
		tab[i++] = *s1++;
	while (*s2)
		tab[i++] = *s2++;
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "Bello";
	char s2[] = "ocea";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/
/*
|note|
allocation fail, return NULL
allocation success, return string s1 + s2 (concatenate)
*/
