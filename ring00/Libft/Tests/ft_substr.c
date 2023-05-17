/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:55:13 by scespede          #+#    #+#             */
/*   Updated: 2023/05/17 14:47:52 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static size_t	sapcemem(char const *s, unsigned int start, size_t len)
{
	size_t	num;

	num = 0;
	if (ft_strlen(&s[start]) > len)
		return (len);
	else
		return (ft_strlen(&s[start]));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	substr = (char *)malloc(sizeof(char) * sapcemem(s, start, len) + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(&s[start]) && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main()
{
//	char a[] = "0";
	char *ptr = NULL;

	ptr = ft_substr("lorem impus",7, 5);

	printf("valor del substr %s",ptr);
	
	}
	*/
