/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtoda.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 23:25:15 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/08 21:47:27 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_addtoda(char **darray, char *str)
{
	int		alen;
	int		i;
	char	**buffer;

	alen = ft_darraylen(darray);
	buffer = malloc(sizeof(char *) * (alen + 2));
	i = 0;
	if (!darray)
	{
		buffer[0] = ft_strdup(str);
		buffer[1] = NULL;
		return (buffer);
	}
	while (darray[i])
	{
		buffer[i] = ft_strdup(darray[i]);
		i++;
	}
	buffer[i] = ft_strdup(str);
	buffer[i + 1] = NULL;
	if (darray)
		ft_freedarray(darray);
	return (buffer);
}
