/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:18:23 by scespede          #+#    #+#             */
/*   Updated: 2023/05/19 10:26:59 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *newnode;

	newnode = (t_list * )malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
	
}
/*
int main ()
{
	t_list *ptr = NULL;
	ft_lstnew(ptr);
}
*/

