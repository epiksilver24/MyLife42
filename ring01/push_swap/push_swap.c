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
	int num;

	num = 0;
	while (tab[i] != NULL)
	{

		if(ft_atoi2(tab[i], &num) == NULL)
			return(-1);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int in = 1;
	if(ac > 1)
	{
		if(parseargv(av) == -1)
		{
				printf("fallo");
		}

		t_ilist *ptr;
		t_ilist *ptr2;

		ptr = ft_lsitnew(ft_atoi(av[in++]));
		while (av[in] != NULL)
		{
			ptr2 = ft_lsitnew(ft_atoi(av[in++]));
			ft_lsitadd_back(&ptr, ptr2);
		}
		
	//	while(ptr->next != NULL)
	//	{
//	//		printf("\nvalor de num = %d\nvalor de indice%d\n",ptr->num, ptr->indi);
	//		ptr = ptr->next;
	//	}
		ft_addindi(&ptr,ft_lsitsize(ptr));
		while (ptr->next != NULL)
		{
			printf("valor de num %d, valor de indice %d\n",ptr->num, ptr->indi);
			ptr = ptr->next;
		}

	}
	return (0);
}
