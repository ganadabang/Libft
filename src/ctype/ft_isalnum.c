/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:14:02 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/04 22:08:48 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((unsigned char)c >= 0x41 && (unsigned char)c <= 0x5a) 
			|| ((unsigned char)c >= 0x61 && (unsigned char)c <= 0x7a)
			|| ((unsigned char)c >= 0x30 && (unsigned char)c <= 0x39));
}
