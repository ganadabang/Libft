/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:17:19 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 20:46:03 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!dst && !src)
		return (0);
	len = ft_strlen(src);
	if (!dst || !dstsize)
		return (len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
