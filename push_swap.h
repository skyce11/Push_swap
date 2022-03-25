/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:00:23 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 13:36:43 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./Libft/libft.h"


typedef struct s_list
{
	int num;
	int pos;
	struct s_list *next;
}
t_list;

t_list *ft_lstnew(int num);
t_list *ft_lstnewpos(int num, int pos);
void	*ft_lstadd_back(t_list **lst, t_list *new);
void	*ft_lstadd_front(t_list **list, t_list *new);
void	*ft_lstclear(t_list **list, void (*del) (void *));
void	ft_lstdelone(t_list **lst);
void	ft_lstiter(t_list *lst);
t_list *ft_lstlast(t_list *lst);
t_list *ft_map(t_list *lst, void *(*f) (void *), void(*del) (void *));
int	ft_lstsize(t_list *list);


/* Movimientos */
void	ft_ra(t_list **a);
void	ft_rra(t_list **a);
void	ft_rb(t_list **b);
void	ft_sa(t_list **a);
