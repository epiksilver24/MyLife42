/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:19:07 by scespede          #+#    #+#             */
/*   Updated: 2023/05/19 12:32:07 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int count;

	count = 0;

	while (lst != NULL) 
	{
		lst = lst->next;
		count++;
	}
	return count;
}
/*
int main ()
{
	char n[]= "pokemon";
//	char n2[]= "pokemon2";
//	char n3[]= "pokemon3";
	t_list *ptr = ft_lstnew(n);
//	t_list *ptr2 = ft_lstnew(n2);
//	t_list *ptr3 = ft_lstnew(n3);
//	printf("\n1. valor del ptr %p\n",ptr);
//	printf("\n2. valor del ptr2 %p\n",ptr2);
	//ptr->next = ptr2;
//	ft_lstadd_front(&ptr3, ptr);
//	printf("\n\n ptr3 -> ptr2 %p\n",ptr3->next);
//	printf("\n\n ptr3 -> ptr %p\n",ptr3->next);

	printf("numero de size de ptr %d",ft_lstsize(ptr));
}
*/
