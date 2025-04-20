/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:52:25 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/04/20 03:05:13 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_replace(char *sent, int replaced)
{
	char	*buffer;
	char	*tmp;

	tmp = sent + replaced;
	buffer = ft_strdup(tmp);
	if (sent)
		free(sent);
	return (buffer);
}
