/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 20:28:18 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/31 06:43:23 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**divide_str(char **div, char const *s, char c);

char			**ft_split(char const *s, char c)
{
	char	**div;
	size_t	max;

	if (s == NULL)
		return (NULL);
	while ((*s == c) && (*s != '\0'))
		s++;
	max = (ft_strlen(s) / 2) + 1;
	if (!(div = (char **)malloc(sizeof(char *) * max)))
		return (NULL);
	ft_memset(div, 0, sizeof(char *) * max);
	return (divide_str(div, s, c));
}

static char		**divide_str(char **div, char const *s, char c)
{
	size_t		len;
	char const	*str;
	char		**ret;

	ret = div;
	while (*s != '\0')
	{
		len = 0;
		str = s;
		while ((*s != '\0') && (*s++ != c))
			len++;
		if (!(*div = ft_calloc(len + 1, sizeof(char))))
		{
			div = ret;
			while (*div != NULL)
				free(*div++);
			free(ret);
			return (NULL);
		}
		ft_memcpy(*div, str, len);
		while ((*s == c) && (*s != '\0'))
			s++;
		div++;
	}
	return (ret);
}
