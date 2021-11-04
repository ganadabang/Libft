/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:27:07 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 20:19:59 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*(unsigned char *)dst = *(unsigned char *)src++;
		if (*(unsigned char *)dst++ == (unsigned char)c)
			return (dst);
		n--;
	}
	return (NULL);
}
