/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:22:07 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 20:45:00 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	join_size;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	join_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = ft_calloc(join_size, sizeof(char))))
		return (NULL);
	ft_strlcat(str, s1, join_size);
	ft_strlcat(str, s2, join_size);
	return (str);
}
