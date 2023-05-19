/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:44:16 by scespede          #+#    #+#             */
/*   Updated: 2023/05/19 14:00:07 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list lstlast;
	
	lstlast = *(ft_lstlast(*lst));
	lstlast.next = new;
}
/*
int main ()
{
	char n[]= "pokemon";
	char n2[]= "pokemon2";
	char n3[]= "pokemon3";
	t_list *ptr = ft_lstnew(n);
	t_list *ptr2 = ft_lstnew(n2);
	t_list *ptr3 = ft_lstnew(n3);
	printf("\n1. valor del ptr %p\n",ptr);
	printf("\n2. valor del ptr2 %p\n",ptr2);
ptr->next = ptr2;
	ft_lstadd_front(&ptr3, ptr);
	printf("\n\n ptr3 -> ptr2 %p\n",ptr3->next);
	printf("\n\n ptr3 -> ptr %p\n",ptr3->next);
	char n4[] = "new pokemon";
	t_list *ptr4 = ft_lstnew(n4);
	ft_lstadd_back(&ptr3,ptr4);
	
	printf("direccion del ultimo puntero %p\n",ptr4);
	printf("que contiene el ultimo puntero %p\n",ft_lstlast(ptr4));
	
}

*/
