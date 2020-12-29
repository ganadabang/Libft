/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 13:41:36 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/29 01:42:59 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t len_n;

	len_n = ft_strlen(s) + 1;
	while (len_n--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
