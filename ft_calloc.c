/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:59:26 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 19:59:27 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t count, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)malloc(count * n);
	if (tab != NULL)
	{
		while (i < count * n)
			tab[i++] = 0;
		return (tab);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	int	*arr;
	int	i;
	int	n;

	n = -2147483647;
	i = 0;
	arr = (int *)ft_calloc(n, sizeof(int));
	while(i < n)
		printf("%d ", arr[i++]);
}
*/
/*
 allocate space for block count in byte size as defined in n
 allocated mem is filled with bytes val of 0
 */
