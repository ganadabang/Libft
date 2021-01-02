/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 02:24:27 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/01/03 04:01:55 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;

	if (lst == NULL)
		return (0);
	size = 1;
	while(lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}