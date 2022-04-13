/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:36:04 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:43:54 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_132(t_list **a, t_list **b)
{
	(void) b;
	ft_rra(a);
	ft_sa(a);
}

void	ft_231(t_list **a)
{
	ft_rra(a);
}

void	ft_213(t_list **a)
{
	ft_sa(a);
}

void	ft_321(t_list **a, t_list **b)
{
	(void) b;
	ft_ra(a);
	ft_sa(a);
}

void	ft_312(t_list **a)
{
	ft_ra(a);
}
