/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:26:46 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:32:41 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*auxa;
	t_list	*auxb;

	if (!a || !b)
		return ;
	if ((*a)-> next && (*b)-> next)
	{
		auxa = (*a)-> next;
		(*a)-> next = auxa -> next;
		ft_lstadd_front(a, auxa);
		auxb = (*b)-> next;
		(*b)-> next = auxb -> next;
		ft_lstadd_front(b, auxb);
	}
	write(1, "ss\n", 3);
}
