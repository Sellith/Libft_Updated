/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darraydup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:42:36 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/07 23:44:14 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arraydup(char **darray)
{
	int		i;
	int		len;
	char	**buffer;

	if (darray == NULL)
		return (NULL);
	len = ft_darraylen(darray);
	buffer = ft_calloc(len + 1, sizeof(char *));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (darray[i] != NULL)
	{
		buffer[i] = ft_strdup(darray[i]);
		i++;
	}
	buffer[i] = NULL;
	return (buffer);
}

// int	main(int argc, char **argv)
// {
// 	char	**buffer;
// 	int		i;

// 	i = 0;
// 	buffer = ft_darraydup(argv, argc + 1);
// 	if (buffer == NULL)
// 	{
// 		ft_putstr_fd("(NULL)", 1);
// 		return (0);
// 	}
// 	while (argc != i)
// 		printf("%s\n", buffer[i++]);
// 	while (i + 1 > 0)
// 	{
// 		free(buffer[i]);
// 		i--;
// 	}
// 	free(buffer);
// 	return (0);
// }
