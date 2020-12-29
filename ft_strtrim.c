/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:03:38 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/29 23:20:58 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		is_inset(char c, char *set);

char 			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;
	char	*first_s2;
	char	*first_s1;

	len = 0;
	first_s1 = (char *)s1;
	if (!s1 || !set)
		return (0);
	while (*s1)
	{
		if (!is_inset(*s1++, (char *)set))
			len++;
	}
	if (!(s2 = ft_calloc(len + 1, sizeof(char))))
		return (0);
	first_s2 = s2;
	s1 = first_s1;
	while (*s1)
	{	
		if (!is_inset(*s1, (char *)set))
			*s2++ = *s1;
		s1++;
	}
	return (first_s2);
}

static char		is_inset(char c, char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}
#include <string.h>
#include <stdio.h>

// int		main(void)
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
//     char *s2 = "Hello \t  Please\n Trim me !";

// 	printf("%s |", ft_strtrim("a123bc", "123"));
// 	printf("%s |", ft_strtrim("a12b3c", "123"));

// 	printf("%s |", ft_strtrim("a1b2c3", "123"));
// 	printf("%s |", ft_strtrim("a1b1c1", "123"));
// 	printf("%s\n", ft_strtrim("a1b1c1", "111"));

// 	printf("%s |", ft_strtrim(0, 0));
// 	printf("%s |", ft_strtrim(0, ""));
// 	printf("%s\n", ft_strtrim(0, "123"));

// 	printf("%s |", ft_strtrim("a1b2c3", "456"));
// 	printf("%s |", ft_strtrim("a1b1c1", "456"));
// 	printf("%s\n", ft_strtrim("a4b", "456"));

// 	return (0);
// }