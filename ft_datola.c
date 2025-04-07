/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datola.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:39:32 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/02/18 21:52:22 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	*ft_datola(char	**darray, int args)
{
	int		i;
	long	*bufferi;

	if (darray == NULL)
		return (NULL);
	bufferi = ft_calloc(args, sizeof(long));
	if (bufferi == NULL)
		return (NULL);
	i = 0;
	while (darray[i] != NULL)
	{
		bufferi[i] = ft_atol(darray[i]);
		i++;
	}
	return (bufferi);
}

// int	main(int argc, char **argv)
// {
// 	long	*res;
// 	int		i;

// 	res = ft_datola(argv, argc);
// 	i = 1;
// 	if (res == NULL)
// 		return (ft_putstr_fd("(null)", 1), 0);
// 	while (i < argc)
// 	{
// 		printf("%li\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
