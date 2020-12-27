/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 15:56:10 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/27 11:41:19 by SSONG            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == s2 || !n)
		return (0);
	while (n-- && (*s1 == *s2) && *s1 && *s2)
	{
		if (n && (*++s1 != *++s2))
			break;
	}
	return(*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// void	ft_print_result(int n)
// {
// 	if (n > 0)
// 		write(1, "1", 1);
// 	else if (n < 0)
// 		write(1, "-1", 2);
// 	else
// 		write(1, "0", 1);
// 	write(1, " ", 1);
// }

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	ft_print_result(ft_strncmp("salut", "salut", 5));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("test", "testss", 7));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("testss", "test", 7));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("test", "tEst", 4));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("", "test", 4));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("test", "", 4));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("abcdefgh", "", 0));
// 	printf("  ");
// 	ft_print_result(ft_strncmp("test\200", "test\0", 6));
// 	printf("\n");

// 	ft_print_result(strncmp("salut", "salut", 5));
// 	printf(" ");
// 	ft_print_result(strncmp("test", "testss", 7));
// 	printf(" ");
// 	ft_print_result(strncmp("testss", "test", 7));
// 	printf(" ");
// 	ft_print_result(strncmp("test", "tEst", 4));
// 	printf(" ");
// 	ft_print_result(strncmp("", "test", 4));
// 	printf(" ");
// 	ft_print_result(strncmp("test", "", 4));
// 	printf(" ");
// 	ft_print_result(strncmp("abcdefghij", "abcdefgxyz", 3));
// 	printf(" ");
// 	ft_print_result(strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf(" ");
// 	ft_print_result(strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf(" ");
// 	ft_print_result(strncmp("abcdefgh", "", 0));
// 	printf(" ");
// 	ft_print_result(strncmp("test\200", "test\0", 6));
// 	printf(" ");
// 	return (0);
// }
