/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:44:28 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/25 18:34:36 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len;
	char *s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	while (len-- >= 0)
		*s2++ = *s1++;
	return (s2);
}