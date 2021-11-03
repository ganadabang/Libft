/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:00:47 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/04 04:59:00 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int ch)
{
	char	*s;

	s = s1 + ft_strlen(s1);
	while (s != s1)
	{
		if (*s == ch)
			return (s);
		s--;
	}
	return (NULL);
}
