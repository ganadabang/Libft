/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 03:12:15 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 06:28:06 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}