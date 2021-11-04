/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:00:58 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:22:23 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __FT_IO__H__
# define __FT_IO__H__

#include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX _SC_OPEN_MAX
# endif

/*
 * stdout
 */
int	ft_putc(int c);
int	ft_puts(const char *s);
int	ft_putendl(const char *s);
int	ft_putnbr(int n);
/*
 * with fd
 */
int	ft_putc_fd(int c, int fd);
int	ft_put_fd(int *s, int fd);
int	ft_putendl_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);

int get_next_line(int fd, char **lineptr);
int ft_printf(const char *format, ...);

#endif  //FT_IO_H
