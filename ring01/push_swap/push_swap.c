/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:56:36 by scespede          #+#    #+#             */
/*   Updated: 2023/07/10 17:27:12 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_push_swap.h" 
#include <stdio.h>

int parseargv(char **tab)
{
	int i;

	i = 1;
	while (tab[i] != NULL)
	{
		if(ft_isalnum(ft_atoi(tab[i])) == -1)
		{
			printf("fallo");
			return -1;
		
		}
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		if(parseargv(av) == -1)
		{
				printf("fallo");
		}
	}
	return (0);
}
