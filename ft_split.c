/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 20:28:18 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/31 04:43:09 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char		**div;
	char		**first_div;
	char const	*str;
	size_t	max;
	size_t	len;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0' && s++);
	max = (ft_strlen(s) / 2) + 1;
	if (!(div = (char **)malloc(sizeof(char *) * max)))
		return (0);
	first_div = div;
	ft_memset(div, 0, sizeof(char *) * max);
	while (*s)
	{
		len = 0;
		str = s;
		while (*s != '\0' && *s++ != c && ++len);
		if (!(*div = ft_calloc(len + 1, sizeof(char))))
		{
			div = first_div;
			while (*div)
				free (*div++);
			free (first_div);
			return (NULL);
		}
		ft_memcpy(*div, str, len);
		while (*s == c && *s++);
		div++;
	}
	return (first_div);
}

// int		main(void)
// {								
// 	char **str1 = ft_split("", 'z');
// 	char **str2 = ft_split("", 0);
// 	//char **str4 = ft_split(0, 0);

// 	printf("%s\n",*str1);
// 	printf("%s\n",*str2);
// 	//printf("%s\n",*str4);
// }