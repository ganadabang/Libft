/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:44:55 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/02 21:06:43 by hyeonsok         ###   ########.fr       */
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
	if(!(new = ft_calloc(len + 1,sizeof(char))))
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		new[idx] = f(idx, s[idx]);
		idx++;
	}
	return (new);
}