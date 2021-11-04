/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:41:36 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/05 03:28:54 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
 *  TODO: TEST
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char *)c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		++s;
	}
	return (s);
}
