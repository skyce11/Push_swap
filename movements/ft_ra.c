/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:32 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/25 10:22:27 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void ft_ra(t_list **a)
{

	if (!a)
		return ;
	t_list  *aux;

	aux = (*a);

	(*a)  = (*a) -> next;
	ft_lstadd_back(a, ft_lstnewpos(aux -> num, aux -> pos));
	free(aux);

	write(1, "ra\n", 3);
}
