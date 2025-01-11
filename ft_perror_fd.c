/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 07:51:12 by hsim              #+#    #+#             */
/*   Updated: 2025/01/09 15:48:43 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* value = its return value */
int	ft_perror_fd(char *s, int fd, int value)
{
	if (!s)
		return (0);
	write(fd, s, ft_strlen(s));
	return (value);
}
