/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:17:42 by scespede          #+#    #+#             */
/*   Updated: 2023/05/10 09:50:25 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int fr_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	cou;

	cou = 0;
	while (n-- > 0)
	{
		if (s1[cou] != s2[cou]) {
			return (((unsigned char)s1[cou]) - ((unsigned char) s2[cou]));	
		}
		s1++;
		s2++;
	}
	return (0);
	
}

//
//int main ()//
//{  
//const char  a[] = "abcdef";
//  const char	b[] = "abc/376xx";
// size_t c = 5; 
// printf("mi funcionsadas\nnum= %d",ft_memcmp(a, b, c) );
//}
//
//
//
