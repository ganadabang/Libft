/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:54:15 by SSONG             #+#    #+#             */
/*   Updated: 2021/07/26 01:41:18 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*first_dst;

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
