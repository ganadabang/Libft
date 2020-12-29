/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:17:19 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/29 22:49:59 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;

    if (!dst && !src)
        return (0);
    len = ft_strlen(src);
	if (!dstsize || !dst)
			return (len);
    while (*src &&  --dstsize)
       *dst++ = *src++;
    *dst = 0;
    return (len);
}
// int     main(void)
// {
//     char *str1 = 0;
//     char *str2 = 0;

//     printf("%lu", ft_strlcpy(str1,str2,8));
//     // printf("%s", str1);

//     return (0);
// }