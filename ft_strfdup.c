/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:08:37 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/02 04:08:41 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfdup(char *sent)
{
	char	*buffer;

	if (!sent)
		return (NULL);
	buffer = ft_strdup(sent);
	if (sent)
		free(sent);
	return (buffer);
}
