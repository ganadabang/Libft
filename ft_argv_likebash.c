/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_likebash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:10:40 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 12:58:05 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_argv_likebash(int ac, char *av[])
{
	char	*join;
	int		i;

	if (!av)
		return (NULL);
	i = 0;
	join = NULL;
	while (i < ac)
	{
		av[i] = ft_strjoin(av[i], " ");
		join = ft_strjoin(join, av[i]);
		i++;
	}
	return (ft_split(join, ' '));
}
