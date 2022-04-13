/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:56:19 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:29:28 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rrb_aux(t_list **b)
{
	t_list	*act;
	t_list	*ant;

	if (!b)
		return (0);
	ant = (*b);
	act = ant -> next;
	while (act -> next)
	{
		ant = act;
		act = act -> next;
	}
	ft_lstadd_front(b, ft_lstnewpos(act -> num, act -> pos));
	ant -> next = 0;
	ft_lstdelone(act);
	return (1);
}

void	ft_rrb(t_list **b)
{
	if (!b)
		return ;
	if (ft_rrb_aux(b))
		write(1, "rrb\n", 4);
}
