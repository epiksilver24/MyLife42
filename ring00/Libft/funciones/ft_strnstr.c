/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:41:59 by scespede          #+#    #+#             */
/*   Updated: 2023/05/10 11:49:07 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		num;
	size_t	count;
	size_t	round;

	round = 0;
	num = 0;
	count = 0;
	while (len-- > 0)
	{
		if (haystack == (char *) needle)
			return (char *)haystack;
		haystack++;
	}
	return ((char *)haystack);
}
//int main ()
//{
//  char  a[] = "abcdef";
//  char	b[] = "abc/376xx";
//  printf("mi funcionsadas\nnum= %d",ft_strncmp(a, b, 5) );
//
//  char  c[] = "abcdef";
//  char	d[] = "abc/375xx";
//  printf("\nmi funcionsadas\nnum= %d\tnum = %d",strncmp(c, d, 5) );
//
//}
