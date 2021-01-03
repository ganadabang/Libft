/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:36:44 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 19:42:57 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*ptr;
	void				*first_ptr;
	unsigned long long	len;

	len = size * count;
	if (!(ptr = (void *)malloc(len)))
		return (NULL);
	first_ptr = ptr;
	while (len--)
		*(char *)ptr++ = '\0';
	return (first_ptr);
}
