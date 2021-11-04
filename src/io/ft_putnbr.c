/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:25:23 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/05 01:28:33 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	ft_putnbr(int n)
{
	if (n < 0)
	{
		return (ft_putc('-') + ft_puts(ft_itoa(n)));
	}
	return (ft_puts(ft_itoa(n)));
}
