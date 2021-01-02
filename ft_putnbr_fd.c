/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:16:29 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 00:04:06 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		put_abs_fd(unsigned int abs, int fd)
{
	if (fd < 0)
		return;
	if (abs > 9)
		put_abs_fd(abs / 10, fd);
	ft_putchar_fd(abs % 10 + '0', fd);
}
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	abs;

	if (fd < 0)
		return;
	abs = n;
	if (n < 0)
	{
		abs = -1 * n;
		ft_putchar_fd('-', fd);
	}
	put_abs_fd(abs, fd);
}