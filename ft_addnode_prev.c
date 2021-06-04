/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnode_prev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:56:11 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 07:56:22 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addnode_prev(t_node *node, t_node *add, t_dclst *lst)
{
	if (node == NULL || add == NULL)
		return ;
	add->next = node;
	add->prev = node->prev;
	node->prev->next = add;
	node->prev = add;
	lst->count++;
}
