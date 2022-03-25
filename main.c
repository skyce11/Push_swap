/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:16:39 by migonzal          #+#    #+#             */
/*   Updated: 2022/03/25 10:22:24 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"







void	get_pos(t_list **list, int pos)
{
	t_list *sig;
	t_list *aux;

	if (!list)
		return ;

	sig = *list;
	aux = sig;

	while (sig)
	{
		if (sig -> pos == -1)
		{
			aux = sig;
			break;
		}
		sig = sig -> next;
	}
	while (sig)
	{
		if (sig -> pos == -1 && sig -> num < aux -> num)
			aux = sig;
		sig = sig -> next;
	}
	aux -> pos = pos;

}

void	ft_setposition(t_list **list)
{
	int	i;
	int	l;

	i = 0;
	l = ft_lstsize(*list);
	if (!list)
		return ;
	while (i < l)
	{
		get_pos(list, i);
		i++;
	}
}




int main(int argc, char **argv)
{
	t_list *a = 0;
	char **s = malloc (1000000);


	int i;
	int j;

	i = 0;
	j = 1;


	if (argc < 2)
	{
		printf("Te faltan números perro\n");
		return (0);
	}


	char *s1 = ft_strdup("");

	char *sp = " ";


	while (argv[++i])
	{
		s1 = ft_strjoin(s1, argv[i]);
		s1 = ft_strjoin(s1, sp);
	}

	printf("Valor del array %s\n", s1);
	
	i = -1;

	s = ft_split(s1, ' ');

	while (s[++i])
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(s[i])));

	}



	ft_setposition(&a);
	int contador = ft_lstsize(a);
	printf("Elementos de la lista %d\n", contador);
	ft_lstiter(a);
	printf("---------------------------------\n");
	ft_rra(&a);
	ft_lstiter(a);


	
	return (0);

}
