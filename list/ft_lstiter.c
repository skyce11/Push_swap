/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:04:44 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/24 10:10:40 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
void hola(t_list *a)
{
	printf("Dentro de la lista %d\n", a -> num);
}

*/
void	ft_lstiter(t_list *lst)
{
	int i = 0;
	if (!lst)
		return ;
	while (lst)
	{
		printf("Valor dentro de la lista %d\n", lst -> num);
		printf("Posiscion que deberia tener::  %d\n", lst -> pos);
		printf("Posición actual: %d\n", i);
		i++;
		lst = lst -> next;
	}
}
