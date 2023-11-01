/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:45:10 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 17:45:11 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] == ' ')
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (neg != 1)
		num *= neg;
	return (num);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi("  -12whatisit"));
}
*/
/*
 convert int string to int
 */
