/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnode_next.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:55:34 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 17:43:07 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addnode_next(t_node *node, t_node *add, t_dclst *lst)
{
	if (node == NULL || add == NULL)
		return ;
	add->next = node->next;
	add->prev = node;
	node->next->prev = add;
	node->next = add;
	lst->count++;
}
