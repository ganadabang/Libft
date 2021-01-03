/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:13:36 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 09:31:31 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
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
