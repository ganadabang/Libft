/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:16:03 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 23:08:23 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  __FT_ADT__H__
# define __FT_ADT__H__

typedef struct s_list t_list;
typedef struct s_slist {
	void	*content;
	t_list	*next;
}	t_slist;

typedef struct s_node t_node;
typedef struct s_node {
	t_node	*next;
	t_node	*prev;
	int		data;
}	t_node;

typedef struct s_list {
	t_node	*front;
	t_node	*back;
	int		count;
}	t_list;

/* 
 * singly linked list
 * TODO: Fix ...
 */
void	ft_slist_add_back(t_slist **lst_, t_slist *new);
void	ft_slist_add_front(t_slist **lst, t_slist *new);
void	ft_slist_clear(t_slist **lst, void (*del)(void *));
void	ft_slist_delone(t_slist *lst, void (*del)(void *));
void	ft_slist_iter(t_slist *lst, void (*f)(void *));
t_slist	*ft_slist_last(t_slist *lst);
t_slist	*ft_slist_map(t_slist *lst, void *(*f)(void *), void (*del)(void *));
t_slist	*ft_slist_new(void *content);
int		ft_slist_size(t_slist *lst);

/* 
 * doubly linked list
 * TODO: Fix ...
 */
t_list	*ft_list_new(void);
int		ft_list_add_front(t_node *node, t_node *add, t_list *lst);
int		ft_list_add_back(t_node *node, t_node *add, t_list *lst);
t_node	*ft_list_peek(t_list *lst);
int		ft_list_clear(t_list *lst);
int		ft_list_isalign(t_list *lst);

/*
 * doubly linked list node
 * TODO: Fix ...
 */
t_node	ft_node_new(int num);
int		ft_node_del(t_node *node, t_list *lst);
int		ft_node_add_next(t_node *node, t_node *add, t_list *lst);
int		ft_node_add_back(t_node *node, t_node *add, t_list *lst);

/*
 * TODO: Stack
 */

/*
 * TODO: Queue
 */

/*
 * TODO: Deque
 */

#endif  //!__FT_ADT__H__