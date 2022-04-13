/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:00:23 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/13 08:17:44 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	ft_lstdelone(t_list *lst);
void	ft_lstiter(t_list *lst);
t_list *ft_lstlast(t_list *lst);
t_list *ft_map(t_list *lst, void *(*f) (void *), void(*del) (void *));
int	ft_lstsize(t_list *list);

/* Auxs movs <= 5*/

void	ft_or4pos0(t_list **a, t_list **b);
void	ft_or4pos3(t_list **a, t_list **b);
void	ft_or4pos1(t_list **a, t_list **b);
void	ft_or4pos2(t_list **a, t_list **b);
/*Movimientos <= 5 */

void	ft_stack5(t_list **a, t_list **b);
void	ft_stack4(t_list **a, t_list **b);
void	ft_distribution(t_list **a, t_list **b);
int		ft_getmax(t_list *a);
int		ft_getmin(t_list *a);
int		ft_getmaxpos(t_list *a, int n);
int		ft_getminpos(t_list *a, int n);
void	ft_132(t_list **a, t_list **b);
void	ft_231(t_list **a);
void	ft_213(t_list **a);
void	ft_321(t_list **a, t_list **b);
void	ft_312(t_list **a);

/*Auxiliares */

int		ft_repeated(t_list *a);
void	free_variables(t_list **list);
void	free_list(char **list);
void	leer(t_list *a, t_list *b);
int		ordered(t_list *a);
int		ft_pow(int num);
void	ft_algorithm(t_list **a, t_list **b);
//void	get_pos(t_list **list, int pos);
//void	ft_setposition(t_list **list);


/* Movimientos */
void	ft_pa(t_list **a, t_list **b);;
void	ft_pb(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rra(t_list **a);
int		ft_rra_aux(t_list **a);
void	ft_rb(t_list **b);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list **a, t_list **b);
void	ft_rrb(t_list **b);
int		ft_rrb_aux(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rrr(t_list **a, t_list **b);

#endif
