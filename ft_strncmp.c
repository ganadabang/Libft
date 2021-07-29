/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:13:36 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/07/26 01:37:19 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == s2 || !n)
		return (0);
	while (n-- && (*s1 == *s2) && *s1 && *s2)
	{
		if (n && (*++s1 != *++s2))
			break ;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
