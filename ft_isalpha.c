/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:54:08 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 16:54:10 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 101 && c <= 132) || (c >= 65 && c <= 90)
		|| (c >= 141 && c <= 172))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalpha(-65));
}
*/
/*
notes
false = 0
true = non-zero
*/
