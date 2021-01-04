/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 20:28:18 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/05 02:10:13 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_strs(char **ret)
{
	char	**div;

	div = ret;
	while (*div != NULL)
	{
		free(*div);
		*div++ = NULL;
	}
	free(ret);
	ret = NULL;
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
			free_strs(ret);
			return (NULL);
		}
		ft_memcpy(*div, str, len);
		while ((*s == c) && (*s != '\0'))
			s++;
		div++;
	}
	return (ret);
}

static size_t	get_count(char const *s, char c)
{
	size_t		count;

	if (s == NULL || *s == '\0')
		return (0);
	if (c == '\0')
		return (1);
	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		while (*s == c)
			s++;
		if (*s != '\0')
			s++;
	}
	if (*--s == c)
		count--;
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**div;
	size_t	count;

	if (s == NULL)
		return (NULL);
	while ((*s == c) && (*s != '\0'))
		s++;
	count = get_count((char *)s, c);
	if (!(div = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	ft_memset(div, 0, sizeof(char *) * (count + 1));
	return (divide_str(div, s, c));
}
