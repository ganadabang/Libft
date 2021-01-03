/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:30:56 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 11:37:51 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || !(sub = ft_calloc(len + 1, sizeof(char))))
		return (0);
	if (!*s || start >= ft_strlen(s))
		return (sub);
	s += start;
	ft_strlcat(sub, s, len + 1);
	return (sub);
}
