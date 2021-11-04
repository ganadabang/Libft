/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 03:00:47 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 23:09:23 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_slist_add_back(t_slist **lst, t_slist *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_slist_last(*lst)->next = new;
}
