/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:44:55 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 18:25:07 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;
	size_t			l;

	if (s == NULL || f == NULL)
		return (NULL);
	l = ft_strlen(s);
	new = (char *)malloc((l + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (++i < l)
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return (new);
}
