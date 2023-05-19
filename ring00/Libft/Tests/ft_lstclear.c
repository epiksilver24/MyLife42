/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:04:42 by scespede          #+#    #+#             */
/*   Updated: 2023/05/19 15:58:19 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;

	ptr = *lst;
	while (ptr->next != NULL)
		(*del)(ptr->content);
	
}

/*
int main ()

{
	char n[]= "pokemon";
	char n2[]= "pokemon2";
	char n3[]= "pokemon3";
	char n4[]= "pokemon4";
	char n5[]= "pokemon5";
	t_list *ptr = ft_lstnew(n);
	t_list *ptr2 = ft_lstnew(n2);
	t_list *ptr3 = ft_lstnew(n3);
	t_list *ptr4 = ft_lstnew(n4);
	t_list *ptr5 = ft_lstnew(n5);
	ptr->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr4;
	ptr4->next = ptr5;
	
	ft_lstclear(&ptr,);	
	free(ptr);
}
*/
