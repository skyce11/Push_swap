/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:27:19 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:06:12 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_pos(t_list **list, int pos)
{
	t_list *sig;
	t_list *aux;

	if (!list)
		return ;

	sig = *list;
	aux = sig;

	while (sig)
	{
		if (sig -> pos == -1)
		{
			aux = sig;
			break;
		}
		sig = sig -> next;
	}
	while (sig)
	{
		if (sig -> pos == -1 && sig -> num < aux -> num)
			aux = sig;
		sig = sig -> next;
	}
	aux -> pos = pos;
}


void	ft_setposition(t_list **list)
{
	int	i;
	int	l;

	i = 0;
	l = ft_lstsize(*list);
	if (!list)
		return ;
	while (i < l)
	{
		get_pos(list, i);
		i++;
	}
}
