/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:16:40 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/04 04:38:38 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	val;
	int		sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
		sign = 44 - *str++;
	val = 0;
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + *str - '0';
		str++;
	}
	if (sign == 1  && val >= 9223372036854775807)
		return (-1);
	if (sign == -1 && val > 9223372036854775807)
		return (0);
	return (sign * val);
}
