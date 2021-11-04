/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:25:28 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/05 09:29:39 by hyeonsok         ###   ########seoul.kr  */
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
	while (curr != lst->head)
	{
		node = curr;
		curr = curr->next;
		free(node);
	}
	free(lst->head);
}
