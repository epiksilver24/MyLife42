/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:54:23 by scespede          #+#    #+#             */
/*   Updated: 2023/05/05 15:47:54 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str , int charac)
{
	size_t count;
	char *a =  (char *)str ;

	count = 0;
	// retorna el puntero a el caracter de \0
	while (count <  (size_t)ft_strlen((char *) str))
	{
		if (a[count] == charac)
			return (&a[count]);
		count++;
	}
	return (0);
}
//
//int main ()
//{
//	char a[] = "pokemon";
//
//	
//	printf("valor de a %s",ft_strchr(a,107));
//}
