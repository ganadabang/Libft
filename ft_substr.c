/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:30:56 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 04:35:41 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char	*sub;
	char	*p;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	s1 += start;
	p = sub;
	while (len-- > 0)
		*p++ = *s1++;
	*p = '\0';
	return (sub);
}
