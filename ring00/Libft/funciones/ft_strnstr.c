/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:41:59 by scespede          #+#    #+#             */
/*   Updated: 2023/05/10 17:44:47 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*ned;
	size_t count;
	size_t position;

	position =0;
	count = 0;
	str = (char *) haystack;
	ned = (char *) needle;
	if (ned[count] == '\0') {
		return (char *) haystack;
	}
	while (str[count] && count < len)
	{
		if(str[count] == ned[position] )
		{
			while (str[count + position] == ned[position] && ned[position] != '\0' && (count + position) < len)
			{
				if (ned[position + 1] == '\0')
					return &str[count];
				position++;
			}
			position = 0;
		}	
		count++;
	}
	return (NULL);
}
//int main ()
//{
//  char  a[] = "lorem impsum dolor sit amet";
//  char	b[] = "impsum";
//  printf("mi funcionsadas\nnum= %s", ft_strnstr(a,b,15) );
//
//
//}
