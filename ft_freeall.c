/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:37:20 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/14 04:24:18 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	selec(char c, va_list args)
{
	char	*buffer;
	void	*ptr;

	buffer = NULL;
	ptr = NULL;
	if (c == 's')
	{
		buffer = va_arg(args, char *);
		ft_str_reset(&buffer);
	}
	else if (c == 'd')
		ft_darray_reset(va_arg(args, char **));
	else if (c == 'S')
	{
		ptr = va_arg(args, void *);
		free(ptr);
	}
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
			{
				ft_printf_putstr("Erreur : '%' seul");
				return ;
			}
		}
		i++;
	}
	va_end (args);
}
