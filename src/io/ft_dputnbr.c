/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:16:29 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/05 01:23:39 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dputnbr(int fd, int n)
{
	if (fd < 0)
		return (-1);
	if (n < 0)
	{
		return (ft_dputc(fd, '-') + ft_dputs(fd, ft_itoa(n)));
	}
	return (ft_dputs(fd, ft_itoa(n)));
}
