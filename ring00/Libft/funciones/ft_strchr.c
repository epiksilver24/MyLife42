/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:54:23 by scespede          #+#    #+#             */
/*   Updated: 2023/05/04 11:25:23 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strchr(char *str , int charac)
{
	int count;

	count = 0;

	while (str[count] != '\0' && str[count] != charac)
	{
		count++;
	}
	return (&str[count]);
}

//int main()
//{
//	char a[] = "pokemon";
//
//
//	printf("string desde puntero %s",ft_strchr(a,'o'));
//	char b[] = "pokemon";
//
//	printf("\nfuncion original %s\n",strchr(b,'o'));
//
//}
