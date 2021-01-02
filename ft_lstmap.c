/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 04:40:37 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 05:19:46 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ret;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(ret = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear (&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}