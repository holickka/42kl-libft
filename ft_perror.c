/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:48:12 by hsim              #+#    #+#             */
/*   Updated: 2025/01/09 15:48:52 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* prints error message, no \n needed*/
int	ft_perror(char *error_text, int return_value)
{
	ft_printf("%s\n", error_text);
	return (return_value);
}
