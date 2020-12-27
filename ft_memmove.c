/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:54:15 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/26 15:51:03 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *first_dst;

	first_dst = dst;
	if (dst == src)
		return (first_dst);
	if (dst < src)
	{
		while (n--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	else
	{
		dst += n - 1;
		src += n - 1;
		while (n--)
			*(unsigned char *)dst-- = *(unsigned char *)src--;
	}
	return (first_dst);
}
