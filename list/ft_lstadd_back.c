/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:53:32 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:41:13 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst)
	{
		aux = ft_lstlast(*lst);
		aux -> next = new;
	}
	else
		*lst = new;
	return (0);
}
