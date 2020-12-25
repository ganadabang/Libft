/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:26:28 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/25 13:41:15 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;

	dst_len = 0;
	src_len = 0;
	while (*dst++)
		dst_len++;
	while (*src && dstsize - 1)
	{
		src_len++;
		*dst = *src;
	}
	*dst = 0;
	return (dst_len + src_len);
}