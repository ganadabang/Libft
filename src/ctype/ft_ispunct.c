/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:31:55 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:01:39 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	ft_ispunct(int c)
{
	return (((unsigned char)c >= 0x21 && (unsigned char)c <= 0x2f) 
			|| ((unsigned char)c >= 0x3a && (unsigned char)c <= 0x40)
			|| ((unsigned char)c >= 0x5b && (unsigned char)c <= 0x60) 
			|| ((unsigned char)c >= 0x7b && (unsigned char)c <= 0x7e));
}
