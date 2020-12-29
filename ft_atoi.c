/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SSONG <SSONG@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:16:40 by SSONG             #+#    #+#             */
/*   Updated: 2020/12/29 03:29:02 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	val;
	int		sign;

	val = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = 44 - *str++;
	while (*str >= '0' && *str <= '9')
	{
		val *= 10;
		val += *str++ - '0';
	}
	if ((val >= 9223372036854775807) && sign == 1)
	{
		return (-1);
	}
	if ((val > 9223372036854775807) && sign == -1)
		return (0);
	return(sign * val);
}
