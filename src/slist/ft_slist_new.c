/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:09:03 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:57:34 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_slist_new(void *content)
{
	t_slist	*new;

	new = (t_slist *)malloc(sizeof(t_slist));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
