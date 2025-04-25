/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:01:13 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/25 01:57:26 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	ft_numblen(long int enby)
{
	int	len;

	len = 0;
	if (enby < 0)
	{
		len++;
		enby *= -1;
	}
	else if (enby == 0)
		return (1);
	while (enby > 0)
	{
		len++;
		enby /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*buffer;
	int			i;
	long int	enby;

	enby = (long int)n;
	i = ft_numblen(enby);
	buffer = ft_calloc((i + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[i--] = '\0';
	if (enby < 0)
	{
		buffer[0] = '-';
		enby *= -1;
	}
	while (enby > 9)
	{
		buffer[i--] = enby % 10 + '0';
		enby /= 10;
	}
	buffer[i] = enby + '0';
	return (buffer);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
