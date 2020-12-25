/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:00:47 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/25 14:43:19 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"




char	*strrchr(const char *s, int c)
{
	const char* chr;

    chr = s;
	while (*s && c)
	{
		if (*s == (char)c)
			chr = s;
        s++;
	}
	return ((char *)chr);
}