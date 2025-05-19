/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellith <sellith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:22:19 by sellith           #+#    #+#             */
/*   Updated: 2025/05/19 17:31:36 by sellith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strrnchrlen(char *src, char c, int len)
{
    int i;

    if (!src)
        return (0);
    i = ft_strlen(src[i]);
    if (i > len)
        i = len;
    while (i > 0 && src[i] != c)
        i--;
    return (i);
}