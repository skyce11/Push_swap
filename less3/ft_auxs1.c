/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxs1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:54:40 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 09:54:18 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_or4pos0(t_list **a, t_list **b)
{
	ft_pb(a, b);
	ft_distribution(a, b);
	ft_pa(a, b);
}

void	ft_or4pos3(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_pb(a, b);
	ft_distribution(a, b);
	ft_pa(a, b);
}

void	ft_or4pos1(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_pb(a, b);
	ft_distribution(a, b);
	ft_pa(a, b);
}

void	ft_or4pos2 (t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rra(a);
	ft_pb(a, b);
	ft_distribution(a, b);
	ft_pa(a, b);
}
