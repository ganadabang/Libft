/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 02:57:18 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:58:41 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_slist_last(t_slist *lst)
{
	while (lst != NULL)
		lst = lst->next;
	return (lst);
}
