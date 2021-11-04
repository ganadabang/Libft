/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:44:28 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/04 18:28:20 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*p;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s == 0)
		return (NULL);
	p = s;
	while (*s1 != '\0')
	{
		*p++ = *s1++;
	}
	*p = '\0';
	return (s);
}
