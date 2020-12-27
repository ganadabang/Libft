/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:51:45 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/27 10:56:21 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char*		h_str;
	char*		n_str;
	size_t		set_len;

	if (haystack == needle || !*needle)
		return((char *)haystack);
	while (*haystack && len)
	{
		set_len = len;
		h_str = (char *)haystack;
		n_str = (char *)needle;
		while (*haystack++ == *needle++ && len--)
		{
			if (!*(needle))
				return (h_str);
		}
		len = --set_len;
		haystack = ++h_str;
		needle = n_str;
	}
	return (0);
}