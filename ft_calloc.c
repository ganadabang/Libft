/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:36:44 by SSONG             #+#    #+#             */
/*   Updated: 2021/07/26 01:39:28 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*ptr;
	void				*first_ptr;
	unsigned long long	len;

	len = size * count;
	ptr = (void *)malloc(len);
	if (!ptr)
		return (NULL);
	first_ptr = ptr;
	while (len--)
		*(char *)ptr++ = '\0';
	return (first_ptr);
}
