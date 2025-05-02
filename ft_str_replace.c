/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:52:25 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/02 04:31:13 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_replace(char **dest, char *src)
{
	if (!src)
	{
		ft_str_reset(dest);
		return ;
	}
	*dest = ft_strdup(src);
	return ;
}
