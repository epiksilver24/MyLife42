/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:55:13 by scespede          #+#    #+#             */
/*   Updated: 2023/05/11 18:18:00 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i < start) {
		substr = malloc(sizeof(char) * 1);
		if (!substr) {
			return (NULL); }
		substr[0] = '\0';
		return (substr);
	}
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr) return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i]; i++;
	}
	substr[i] = '\0';
	return (substr);
}
//
//int main()
//{
//	char a[] = "01234";
//	char *ptr = NULL;
//
//	ptr = ft_substr(a, 10, 10);
//	printf("valor del substr %s",ptr);
//	
//}
