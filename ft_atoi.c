/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:16:40 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 19:34:05 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_atoi(const char *str)
{
	size_t	val;
	int		sign;

	val = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = 44 - *str++;
	while (*str >= '0' && *str <= '9')
	{
		val *= 10;
		val += *str++ - '0';
	}
	if ((val >= LLONG_MAX) && sign == 1)
	{
		return (-1);
	}
	if ((val > LLONG_MAX) && sign == -1)
		return (0);
	return (sign * val);
}
