/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:54:15 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/24 21:31:59 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cast_dst;
	const void		*cast_src;

	cast_dst = dst;
	cast_src = src;
	while (n)
	{
		if (dst >= src)
		{
			while (n--)
				*cast_dst++ = *(unsigned char *)cast_src++;
		}
		else
		{
			cast_dst += n;
			cast_src += n;
			while (n--)
				*--cast_dst = *(unsigned char *)--cast_src;
		}
	}
	return (dst);
}
