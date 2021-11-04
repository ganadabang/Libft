/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 03:12:15 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 23:50:46 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_slist_clear(t_slist **lst, void (*del)(void*))
{
	t_slist	*next;

	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_slist_delone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
