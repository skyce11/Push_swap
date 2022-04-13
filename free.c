/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 08:10:30 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:28:50 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_variables(t_list **list)
{
	t_list	*sig;

	sig = (*list);
	while (sig)
	{
		sig = (*list)->next;
		free((*list));
		(*list) = sig;
	}
	free(*list);
}

void	free_list(char **list)
{
	int	i;

	i = -1;
	while (list[++i])
		free(list[i]);
	free(list);
}
