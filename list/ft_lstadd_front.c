/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:56:26 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 12:01:51 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_lstadd_front(t_list **list, t_list *new)
{
	if (!new)
		return (0);
	if (!list)
	{
		*list = new;
		return (0);
	}
	new -> next = *list;
	*list = new;
	return (0);
}
