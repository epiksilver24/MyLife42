/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:55:13 by scespede          #+#    #+#             */
/*   Updated: 2023/05/17 12:59:36 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	if (!s)
	{
		substr = ft_strdup("");
		if(!substr)
			return NULL;
		return (substr);
	}
	// si start empeiza en un ligar superior al tamano de s
	if (ft_strlen(s) < start)
	{
		substr = ft_strdup("");
		if(!substr)
			return NULL;
		return (substr);
	}
	// reservamos memoria del puntero del tamano del s 
	substr = (char *)malloc(sizeof(char) * (ft_strlen(&s[start])));
	if (!substr)
		return (NULL);
	i = 0;
	// guardamos el s en el substring
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	// ponemos el nulo al final de la frase
	substr[i] = '\0';
	return (substr);
}
/*
int main()
{
//	char a[] = "0";
	char *ptr = NULL;

	ptr = ft_substr("pokemon digimon", 5,10);

	printf("valor del substr %s",ptr);
	
}
*/
