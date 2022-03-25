/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:53:32 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 12:01:58 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if(*lst)
	{
		aux = ft_lstlast(*lst);
		aux -> next = new;
//d		aux -> pos  = aux -> pos + 1;
	}
	else
		*lst = new;
	return (0);
}
