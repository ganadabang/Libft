/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_likebash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:10:40 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/07/26 01:41:46 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_argv_likebash(int ac, char *av[])
{
	char	*v;
	char	*join;
	char	*tmp;
	char	**ret;
	int		i;

	if (!av)
		return (NULL);
	i = 0;
	join = NULL;
	while (i < ac)
	{
		v = ft_strjoin(av[i], " ");
		tmp = join;
		join = ft_strjoin(join, v);
		free(v);
		free(tmp);
		i++;
	}
	ret = ft_split(join, ' ');
	free(join);
	return (ret);
}
