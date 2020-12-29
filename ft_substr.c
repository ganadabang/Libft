/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:30:56 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/30 00:32:06 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	
    if (!(sub = ft_calloc(++len, sizeof(char))))
		return (0);
	s += start;
	ft_strlcat(sub, s, len);
	return (sub);
}

// int		main(void)
// {
// 	printf("%s", ft_substr("hello",0,5));

// 	// printf("%s","\0");

// 	return (0);
// }

