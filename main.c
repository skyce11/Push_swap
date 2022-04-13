/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:16:39 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/13 08:36:43 by migonzal         ###   ########.fr       */
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
	t_list *b = 0;
	char **s = malloc (sizeof(char *) * argc);


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


//	free(s1);
	while (argv[++i])
	{
	/*	while(argv[i][++j])
		{
			if(ft_isdigit(argv[i][j]) == 0 && argv[i][j] != 32)
			{
				printf("Aqui hay cosas que no son mumeros");
				return (0);
			}


		}*/
	//	j = -1;
		free(s1);
		s1 = ft_strjoin(s1, argv[i]);
		free(s1);
		s1 = ft_strjoin(s1, sp);
	}
//	free(sp);

	
	i = -1;
//aqui nop
	free(s);
	s = ft_split(s1, ' ');
	free(s1);

	//system("leaks push_swap");	
	while (s[++i])
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(s[i])));
	}
	free_list(s);

	if (ft_repeated(a) == 0)
	{
		printf("ERROR, mio\n");
		return (0);
	}

	ft_setposition(&a);
	if (ordered(a))
	{

		printf("TODO CORRECTO");
		free_variables(&a);
		return (0);
	}
	leer(a, b);
	if (ft_lstsize(a) <= 3)
		ft_distribution(&a, &b);
	else if (ft_lstsize(a) == 4)
		ft_stack4(&a, &b);
	else if (ft_lstsize(a) == 5)
		ft_stack5(&a, &b);
	else
		ft_algorithm(&a, &b);
	leer(a, b);
	free_variables(&a);
	free_variables(&b);
//	system("leaks push_swap");

	return (0);

}
