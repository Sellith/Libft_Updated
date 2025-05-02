/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_n_close.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 04:21:15 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/02 04:23:48 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_n_close(int fd)
{
	char	*buffer;

	buffer = ft_get_all_file(fd);
	close(fd);
	return (buffer);
}
