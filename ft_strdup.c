/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:36:29 by hsim              #+#    #+#             */
/*   Updated: 2023/10/05 16:36:30 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
	{
		errno = ENOMEM;
		return (NULL);
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s\n", ft_strdup("Helloos"));
	printf("%s\n", strdup("What"));
}
*/
/*
allocates sufficiant memory for copy of string s1
copies it,
returns a pointer to it

if memory insufficient
return NULL
errno = ENOMEM 
*/
