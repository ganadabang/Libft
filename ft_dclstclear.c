/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:25:28 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 12:58:46 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dclstclear(t_dclst *lst)
{
	t_node	*curr;
	t_node	*node;

	if (!lst)
		return ;
	curr = lst->head->next;
	while (curr->next != lst->head)
	{
		node = curr;
		curr = curr->next;
		free(node);
	}
	free(lst->head);
}