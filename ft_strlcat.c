/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:26:28 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/27 02:16:32 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (*dst && dst++)
		dstsize--;
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (dst_len + src_len);
}

//int		main(void)
//{
//	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
//	char buff1[0xF00] = "there is no stars in the sky";
//	char buff2[0xF00] = "there is no stars in the sky";
//	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
//	printf("%lu\n",strlcat(buff1,str,max));
//	printf("arr1 : %s\n",buff1);
//	printf("%lu\n",ft_strlcat(buff2,str,max));
//	printf("arr3 : %s\n",buff2);
//return (0);
//}
