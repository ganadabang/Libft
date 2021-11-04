/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 04:40:37 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 23:52:44 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_slist_map(t_slist *lst, void *(*f)(void *), void (*del)(void *))
{
	t_slist	*new;
	t_slist	*iter;
	int		size;

	size = ft_slist_size(lst);
	new = ft_slist_new(f(lst->content));
	iter = new;
	while (size--  > 0)
	{
		if (iter == NULL)
		{
			ft_slist_clear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		iter->next = ft_slist_new(f(lst->content));
		iter = iter->next;
	}
	ft_slist_iter(new, f);
	return (new);
}
