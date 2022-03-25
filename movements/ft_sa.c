/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:05:50 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 11:49:44 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_list **a)
{
	if (!a)
		return ;

	t_list *aux;

	aux = (*a);
	(*a) = (*a) -> next;


	write(1, "sa\n", 3);
}