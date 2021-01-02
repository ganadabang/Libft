/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:03:38 by hyeonsok          #+#    #+#             */
/*   Updated: 2020/12/30 20:27:38 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	int		isinset(char ch, char const *set);

char 			*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx;
	char 	*ret;
	
	if (s1 == NULL)
		return (0);
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		s1++;
	idx = ft_strlen(s1);
	s1 += idx - 1;
	while (idx != 0 && ft_strchr(set, *s1) != NULL)		//이게 지금 애매한 것 같다 ..  idx = 1일 때 어떻게 작동하는가 ? 
	{
		s1--;
		idx--;
	}
	if (!(ret = ft_calloc(idx + 1, sizeof(char))))
		return (0);
	s1 -= (idx - 1);
	return ((char *)ft_memcpy(ret, s1, idx));
}
// static int		isinset(char ch, char const *set) //'\0'은 set에 해당되지 않음 
// {
// 	while (set && *set)
// 	{
// 		if (ch == *set++)
// 			return (1);
// 	}
// 	return (0);
// }

// #include <string.h>
// #include <stdio.h>

// int		main(void)
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *s2 = "  \t \t \n   \n\n\n\t";

// 	printf("%s\n", ft_strtrim(s1, s2));
// 	// printf("%s |", ft_strtrim("a123bc", "123"));
// 	// printf("%s |", ft_strtrim("a12b3c", "123")); 

// 	// printf("%s |", ft_strtrim("a1b2c3", "123"));
// 	// printf("%s |", ft_strtrim("a1b1c1", "123"));
// 	// printf("%s\n", ft_strtrim("a1b1c1", "111"));

// 	// printf("%s |", ft_strtrim(0, 0));
// 	// printf("%s |", ft_strtrim(0, ""));
//  	// printf("%s\n", ft_strtrim(0, "123"));

//  	// printf("%s |", ft_strtrim("   \n\n  ", ""));
// 	// printf("%s |", ft_strtrim("a1b1c1", 0));
// 	// printf("%s\n", ft_strtrim("a4b", "456"));

// 	return (0);
// }