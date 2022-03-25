/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:02:43 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 14:01:14 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelone(t_list **lst)
{
	if (*lst == NULL)
		return ;
	free(*lst);
	(*lst) = (*lst) -> next;
	//system("leaks push_swap");
}
