/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:33:41 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/01 10:26:25 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ordered(t_list *a)
{
	t_list *aux = 0;

	if (!a)
		return (0);

	while (a)
	{
		if (a -> next == NULL)
			break;
		aux = a -> next;
//		printf("A ver que coño pasa %d %d\n", a -> num, aux -> num);
		if (a -> num < aux -> num)
		{
			a = a -> next;
		}
		else
		{
//			printf("ERROOOOOOOR\n");
			return (0);
		}
	}
	return (1);
}
