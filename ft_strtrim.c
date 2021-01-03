/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:03:38 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 11:40:09 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx;
	char	*ret;

	if (s1 == NULL)
		return (0);
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		s1++;
	idx = ft_strlen(s1);
	s1 += idx - 1;
	while (idx != 0 && ft_strchr(set, *s1) != NULL)
	{
		s1--;
		idx--;
	}
	if (!(ret = ft_calloc(idx + 1, sizeof(char))))
		return (0);
	s1 -= (idx - 1);
	return ((char *)ft_memcpy(ret, s1, idx));
}
