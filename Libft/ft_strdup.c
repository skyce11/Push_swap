/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:37:36 by migonzal          #+#    #+#             */
/*   Updated: 2022/04/12 08:41:38 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*address;
	int		i;

	i = 0;
	address = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (! address)
		return (NULL);
	while (*s1)
	{
		address[i] = *s1;
		s1++;
		i++;
	}
	address[i] = '\0';
	return (address);
}
