/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:22:07 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/29 23:37:10 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strsize;
	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return(0);
		if (s1 == NULL)
			return(ft_strdup(s2));
		if (s2 == NULL)
			return(ft_strdup(s1));
	}
	strsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = ft_calloc(strsize, sizeof(char))))
		return (0);
	ft_strlcat(str, s1, strsize);
	ft_strlcat(str, s2, strsize);
	return (str);
}


// int		main(void)
// {
// 	printf("%s|", ft_strjoin(0, 0));
// 	printf("%s|", ft_strjoin(0, ""));
// 	printf("%s\n", ft_strjoin(0, "123"));

// 	printf("%s|", ft_strjoin("", 0));
// 	printf("%s|", ft_strjoin("", ""));
// 	printf("%s\n", ft_strjoin("", "123"));

// 	printf("%s|", ft_strjoin("abc", 0));
// 	printf("%s|", ft_strjoin("abc", ""));
// 	printf("%s\n", ft_strjoin("abc", "123"));

// 	//printf("%ld", strlen(0)); // -> seg fault
// 	// printf("%s",0);	// -> (null)
// 	// printf("%s","\0") // -> ""
// 	// while (*(s == NULL)) => seg fault

// 	printf("%s","\0");

// 	return (0);
// }

// s2가 null 이면 -> s2:
// s1이 null 이면 -> s2가 나오면 되는거지


