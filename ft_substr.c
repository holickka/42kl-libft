/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:16:59 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 20:17:22 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;

	i = 0;
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	while (i < len)
		tab[i++] = ((char *)s)[start++];
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char c[] = "Melloe";
	char *dest;
	dest = ft_substr(c, 2, 3);
	printf("%s\n", dest);
}
*/
/*
 create newstr from s[start] to s[len], return newstr
 i assume len doesnt include '\0'
 if allocation fail, return NULL
 */
