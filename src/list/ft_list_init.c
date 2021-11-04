/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:13:14 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/06/04 17:43:45 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dclst	*ft_dclstinit(void)
{
	t_dclst	*lst;

	lst = (t_dclst *)malloc(sizeof(t_dclst));
	if (!lst)
		return (NULL);
	lst->head = ft_nodenew(0);
	lst->head->next = lst->head;
	lst->head->prev = lst->head;
	lst->count = 0;
	return (lst);
}
