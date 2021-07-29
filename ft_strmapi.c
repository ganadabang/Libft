/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:44:55 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/07/26 01:37:53 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	idx;
	size_t			len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		new[idx] = f(idx, s[idx]);
		idx++;
	}
	return (new);
}
