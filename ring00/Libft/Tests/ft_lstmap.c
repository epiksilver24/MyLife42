/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:15:02 by scespede          #+#    #+#             */
/*   Updated: 2023/05/24 09:12:54 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *a;
	t_list *save;
	a = NULL;

	void *temp;

	if(lst)
	{
		temp = ((*f)(lst->content);
		a = ft_lstnew((*f)(temp);
		if(a == NULL)
		{
			(*del)(temp);
			return NULL;
		}
	}

	save = a;	
	while (lst)
	{
		lst = lst->next;
		if(lst)
		{
			a->next = ft_lstnew((*f)(lst->content));
			if(!a)
			{
				ft_lstclear(&save,del);
				return NULL;
			}
			a = a->next;
		}
	}
	
	return (save);
}
int  *savenum(int *s)
{
	int *ptr;
	ptr = (int *)malloc((sizeof(int)));
	ptr = s;
	return (ptr);
}
static void *plustwo(void *n)
{
	n = n + 2;
	return n;
}


int main ()
{
	int  *p ;
	p = (int *) 3;
	int  *n1 =savenum(p) ;
	int  *n2 =savenum(p) ;
	int  *n3 =savenum(p) ;
	int  *n4 =savenum(p) ;
	t_list *ptr = ft_lstnew(n1);
	t_list *ptr2 = ft_lstnew(n1);
	t_list *ptr3 = ft_lstnew(n2);
	t_list *ptr4 = ft_lstnew(n3);
	t_list *ptr5 = ft_lstnew(n4);
	ptr->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr4;
	ptr4->next = ptr5;
	t_list *newc;

	newc = ft_lstmap(ptr,plustwo,free);

	while(newc)
	{
		int *numero;
		int *d;
	numero = newc->content;
	d = numero;
		printf("valor de numero %ls\n",(int *)d);
		newc = newc->next;
	}


}
