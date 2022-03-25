/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:59:26 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 16:40:29 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_list **a)
{
	if (!a)
		return ;


	t_list *aux;

	aux = ft_lstlast(*a);

	ft_lstadd_front(a, ft_lstnewpos(aux -> num, aux -> pos));
	ft_lstdelone(ft_lstlast(*a));
	free(aux);

	write(1, "rra\n", 4);

}
