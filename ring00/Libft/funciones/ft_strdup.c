/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:15:52 by scespede          #+#    #+#             */
/*   Updated: 2023/05/11 01:51:20 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	leng;
	char	*ptr;

	ptr = NULL;
	leng = ft_strlen(s);
	ptr = (char *)ft_calloc(leng + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memmove((char *)ptr, (char *)s, leng);
	return (ptr);
}
//
//int main ()
//{
//	char s[] = "pokemon";
//	char *p;
//	p = ft_strdup(s);	
//	printf("frase de s %s",s);
//}
//
