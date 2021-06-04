/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstpeek.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 09:56:15 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 17:43:59 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_dclstpeek(t_dclst *lst, int data)
{
	t_node	*curr;

	if (!lst || !lst->count)
		return (NULL);
	curr = lst->head->next;
	while (curr != lst->head)
	{
		if (curr->data == data)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
