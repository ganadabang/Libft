/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:57:45 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/04 21:58:47 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((unsigned char)c >= 0x61 && (unsigned char)c <= 0x7a)
			|| ((unsigned char)c >= 0x41 && (unsigned char)c <= 0x5a));
}
