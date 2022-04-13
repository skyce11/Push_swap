/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leer.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:01:25 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:19:18 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void leer(t_list *a, t_list *b)
{
	while (a || b)
	{
		if (a != NULL)
		{	
			printf("%d    ", a -> num);
			a = a -> next;
		}
		else
			printf("NULL");
		if (b != NULL)
		{
			printf("%d\n", b -> num);
			b = b -> next;
		}
		else
			printf("NULL\n");
	}
	printf("---------\n");
	printf("A       B\n");
}
