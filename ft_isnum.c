/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 06:12:38 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/20 21:39:13 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isnum(char s)
{
	if (s < '0' || s > '9')
		return (true);
	return (false);
}

// int	main(void)
// {
// 	printf("%i", ft_isnum());
// 	return (0);
// }
