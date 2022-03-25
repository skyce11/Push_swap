/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:59:19 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/21 09:02:23 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list *t;
	t_list *aux;

	t = *lst;
	while(t)
	{
		aux = t -> next;
		ft_lstdelone(t, del);
		t = aux;
	}
	*lst = NULL;
}
