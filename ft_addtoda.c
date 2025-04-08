/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtoda.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 23:25:15 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/07 23:57:13 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_addtoda(char **darray, char *str)
{
	int		alen;
	int		i;
	char	**buffer;

	alen = ft_darraylen(darray);
	buffer = malloc(sizeof(char *) * alen + 2);
	i = 0;
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
