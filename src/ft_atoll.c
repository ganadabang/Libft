/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:57:08 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 19:24:36 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *str)
{
	unsigned long long	val;
	int					sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
	{
		++str;
	}
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		sign = 44 - *str;
		++str;
	}
	val = 0;
	while (*str >= '0' && *str <= '9')
	{
		val += val * 10 + *str - '0';
		++str;
	}
	if ((val >= 9223372036854775807) && sign == 1)
		return (-1);
	if ((val > 9223372036854775807) && sign == -1)
		return (0);
	return (sign * val);
}
