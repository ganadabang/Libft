/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:51:02 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:24:52 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT__H__
# define __LIBFT__H__

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

# include "ft_ctype.h"
# include "ft_io.h"
# include "ft_string.h"
# include "ft_adt.h"

/*
** not standard
*/
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
long long		ft_atoll(const char *str);

#endif  //!__LIBFT__H__