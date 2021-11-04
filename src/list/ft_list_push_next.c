/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnode_next.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:55:34 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 19:28:08 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_addnode_next(t_node *node, t_node *add, t_list *lst)
{
	if (node == NULL || add == NULL)
		return (1);
	add->next = node->next;
	add->prev = node;
	node->next->prev = add;
	node->next = add;
	return (0);
}
