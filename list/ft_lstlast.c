/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:08:01 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:39:35 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	if (!lst)
		return (0);
	while (aux -> next != 0)
		aux = aux -> next;
	return (aux);
}
