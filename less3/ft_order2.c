/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:42:33 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:54:29 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_getmax(t_list *a)
{
	int	num;

	num = 0;
	if (!a)
		return (0);
	while (a)
	{
		if (a->num > num)
		{
			num = a -> num;
		}
		a = a -> next;
	}
	return (num);
}

int	ft_getmaxpos(t_list *a, int n)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a -> num == n)
			break ;
		a = a -> next;
		i++;
	}
	return (i);
}

int	ft_getmin(t_list *a)
{
	int	num;

	if (!a)
		return (0);
	num = ft_getmax(a);
	while (a)
	{
		if (a -> num < num)
			num = a -> num;
		a = a -> next;
	}
	return (num);
}

int	ft_getminpos(t_list *a, int n)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a -> num == n)
			break ;
		a = a -> next;
		i++;
	}
	return (i);
}
