/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:56:05 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:19:55 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __FT_CTYPE__H__
# define __FT_CTYPE__H__

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isblank(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_isgraph(int c);
int	ft_islower(int c);
int	ft_isodigit(int c);
int	ft_isprint(int c);
int	ft_issign(int c);
int	ft_isupper(int c);
int	ft_isxdigit(int c);
int	ft_isspace(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
