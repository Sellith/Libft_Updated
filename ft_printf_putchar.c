/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:49:07 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/09/05 03:43:58 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf_putchar_fd( int fd, char c)
{
	return (write(fd, &c, 1));
}

char	*ft_ctoa(char c)
{
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	return (ft_strdup(str));
}
