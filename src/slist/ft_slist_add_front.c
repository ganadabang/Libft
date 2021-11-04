/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:30:26 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 23:37:51 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_slist_add_front(t_slist **lst, t_slist *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = (*lst);
	*lst = new;
}
