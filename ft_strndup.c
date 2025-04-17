/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:29:53 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/17 19:55:15 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *sent, int size)
{
	char	*buffer;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(sent);
	if (len > size)
		len = size;
	buffer = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		buffer[i] = sent[i];
		i++;
	}
	return (buffer);
}
