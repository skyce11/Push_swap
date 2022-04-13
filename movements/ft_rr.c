/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:18:47 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:35:13 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_list **a, t_list **b)
{
	t_list	*auxa;
	t_list	*auxb;

	if (!a || !b)
		return ;
	auxa = (*a);
	auxb = (*b);
	(*a) = (*a)-> next;
	ft_lstadd_back(a, ft_lstnewpos(auxa-> num, auxa-> pos));
	free(auxa);
	(*b) = (*b)-> next;
	ft_lstadd_back(a, ft_lstnewpos(auxb-> num, auxb-> pos));
	free(auxb);
	write(1, "rr\n" 3);
}
