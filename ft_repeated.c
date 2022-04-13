/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeated.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:24:12 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/11 13:00:59 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_repeated(t_list *a)
{
	t_list	*sig;
	t_list	*var;
	int		n;

	var = a;
	if (!a)
		return (0);
	while (var != 0)
	{
		n = var->num;
		sig = var->next;
		while (sig != 0)
		{
			if (n == sig->num)
				return (0);
			sig = sig->next;
		}
		var = var->next;
	}
	return (1);
}
