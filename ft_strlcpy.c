/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:17:19 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/25 13:25:38 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;

    len = 0;
    while (*src || dstsize - 1)
    {
       *dst++ = *src++;
       len++;
    }
    *dst = 0;
    while (*src++)
        len++;
    return (len);
}