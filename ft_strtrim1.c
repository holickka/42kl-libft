/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:20:08 by hsim              #+#    #+#             */
/*   Updated: 2023/11/04 16:09:27 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_last(char const *s1, char const *set)
{
	size_t	lenstr;
	size_t	lenset;

	lenstr = ft_strlen(s1);
	lenset = ft_strlen(set);
	while (lenstr > 0 && s1[lenstr--] == set[lenset])
	{
		if (lenset == 0)
			return (ft_strlen(s1) - ft_strlen(set));
		lenset--;
	}
	return (ft_strlen(s1));
}

char	*ft_find1st(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == to_find[0])
		{
			x = 0;
			while (str[i + x] && str[i + x] == to_find[x] && i + x < len)
				x++;
			if (to_find[x] == '\0')
				return ((char *)&str[x]);
		}
		i++;
	}
	return ((char *)str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		x;
	char	*tab;

	i = 0;
	a = 0;
	s1 = ft_find1st(s1, set, ft_strlen(set));
	x = is_last(s1, set);
	if (x != 0)
	{
		tab = (char *)malloc((x + 1) * sizeof(char));
		if (tab != NULL)
		{
			while (i < x)
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
	printf("%s\n", ft_strtrim("+-saw++awwa++asd-+", "++"));
}
*/
/*
|note|
trim string when set is detected
remove beginning & end of s1 if set is detected there
if allocation success, return trimmed string
if allocation failed, return NULL
*/
