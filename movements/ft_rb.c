/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:01:05 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:31:30 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_list **b)
{
	t_list	*aux;

	if (!b)
		return ;
	aux = (*b);
	(*b) = (*b)-> next;
	ft_lstadd_back(b, ft_lstnewpos(aux -> num, aux -> pos));
	free(aux);
	write(1, "rb\n", 3);
}
