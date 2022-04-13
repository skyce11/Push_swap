/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:47:24 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:38:46 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int num)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (0);
	new -> num = num;
	new -> pos = -1;
	new -> next = NULL;
	return (new);
}

t_list	*ft_lstnewpos(int num, int pos)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new -> num = num;
	new -> pos = pos;
	new -> next = NULL;
	return (new);
}
