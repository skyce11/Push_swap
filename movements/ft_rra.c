/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:59:26 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:10:35 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rra_aux(t_list **a)
{
	t_list	*act;
	t_list	*ant;

	if (!a)
		return (0);
	ant = (*a);
	act = ant->next;
	while (act->next)
	{
		ant = act;
		act = act->next;
	}
	ft_lstadd_front(a, ft_lstnewpos(act->num, act->pos));
	ant->next = 0;
	ft_lstdelone(act);
	return (1);
}

void	ft_rra(t_list **a)
{
	if (!a)
		return ;
	if (ft_rra_aux(a))
		write(1, "rra\n", 4);
}	
