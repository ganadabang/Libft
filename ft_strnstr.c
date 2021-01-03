/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:51:45 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 20:39:43 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp_hay;
	char	*tmp_nee;
	size_t	tmp_len;

	if (haystack == needle || !*needle)
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		tmp_len = len;
		tmp_hay = (char *)haystack;
		tmp_nee = (char *)needle;
		while (*haystack++ == *needle++ && len--)
		{
			if (*needle == '\0')
				return (tmp_hay);
		}
		len = --tmp_len;
		haystack = ++tmp_hay;
		needle = tmp_nee;
	}
	return (NULL);
}
