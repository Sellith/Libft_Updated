/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isatoiable.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:50:52 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/05/21 22:51:06 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isatoiable(char c)
{
	if ((c < '0' || c > '9') && c != '+' && c != '-')
		return (false);
	return (true);
}
