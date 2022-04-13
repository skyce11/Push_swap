/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:16:09 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:58:46 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_distribution(t_list **a, t_list **b)
{
	int	posmax;
	int	posmin;

	posmax = ft_getmaxpos(*a, ft_getmax(*a));
	posmin = ft_getminpos(*a, ft_getmin(*a));
	if (posmax == 1 && posmin == 0)
		ft_132(a, b);
	else if (posmax == 1 && posmin == 2)
		ft_231(a);
	else if (posmax == 2 && posmin == 1)
		ft_213(a);
	else if (posmax == 0 && posmin == 2)
		ft_321(a, b);
	else if (posmax == 0 && posmin == 1)
		ft_312(a);
}

void	ft_stack4(t_list **a, t_list **b)
{
	int	posmin;

	posmin = ft_getminpos(*a, ft_getmin(*a));
	if (posmin == 0)
	{
		ft_pb(a, b);
		ft_distribution(a, b);
		ft_pa(a, b);
//		ft_or4pos0(a, b);
	}
	else if (posmin == 3)
	{
		ft_rra(a);
		ft_pb(a, b);
		ft_distribution(a, b);
		ft_pa(a, b);
//		ft_or4pos3(a, b);
	}
	else if (posmin == 1)
	{
		ft_sa(a);
		ft_pb(a, b);
		ft_distribution(a, b);
		ft_pa(a, b);
//		ft_or4pos1(a, b);
	}
	else if (posmin == 2)
	{
		ft_rra(a);
		ft_rra(a);
		ft_pb(a, b);
		ft_distribution(a, b);
		ft_pa(a, b);
//		ft_or4pos2(a, b);
	}
}

void	ft_stack5(t_list **a, t_list **b)
{
	int	posmin;

	posmin = ft_getminpos(*a, ft_getmin(*a));
	if (posmin == 0)
	{	
		ft_pb(a, b);
		ft_stack4(a, b);
		ft_pa(a, b);
	}
	else if (posmin == 1)
	{
		ft_sa(a);
		ft_pb(a, b);
		ft_stack4(a, b);
		ft_pa(a, b);
	}
	else if (posmin == 2)
	{
		ft_ra(a);
		ft_ra(a);
		ft_pb(a, b);
		ft_stack4(a, b);
		ft_pa(a, b);
	}
	else if (posmin == 3)
	{
		ft_rra(a);
		ft_rra(a);
		ft_pb(a, b);
		ft_stack4(a, b);
		ft_pa(a, b);
	}
	else if (posmin == 4)
	{
		ft_rra(a);
		ft_pb(a, b);
		ft_stack4(a, b);
		ft_pa(a, b);
	}
}
