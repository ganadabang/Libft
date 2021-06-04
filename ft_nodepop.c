/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodepop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:54:37 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 07:54:52 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_nodepop(t_node *node, t_dclst *lst)
{
	if (node == NULL)
		return (NULL);
	if (node->prev != NULL && node->next != NULL)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	lst->count--;
	return (node);
}