/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:37:20 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/14 02:21:53 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	selec(char c, va_list args)
{
	if (c == 's')
		free(va_arg(args, char *));
	if (c == 'd')
		free(va_arg(args, char **));
	if (c == 'S')
		free(va_arg(args, void *));
}

void	ft_freeall(char *format, ...)
{
	int		i;
	va_list	args;

	if (!format)
		return ;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i++] != '\0')
				selec(format[i], args);
			else
				return (ft_printf_putstr("Erreur : '%' seul"));
		}
		i++;
	}
	va_end (args);
}
