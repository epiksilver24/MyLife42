/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:23:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/28 14:04:31 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strchr(const char *str, int c)
{
	int i;
	char *s;

	s = (char *) str;
	i = 0;
	if(s)
	{
	while (s[i])
	{
		if(s[i] == (char)c)
		{
			return(&s[i]);
		}
		i++;
	}
	}
	return (NULL);
}

int ft_strlen(char *str)
{
	int	c;
	
	c = 0;
	if(str)
	{
	while (str[c])
	{
		c++;
	}
	}
	return (c);
}

char *ft_strjoin(char *s1, char  *s2)
{
	char *str;
	size_t	leng;
	int	i;
	int itwo;

	itwo = 0;
	i = 0;
	leng = ft_strlen(s1)  + ft_strlen( s2) + 1;
	str = malloc((sizeof(char) * leng));
	if(!str)
		return (NULL);
	if(!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		if(!s1)
			return (NULL);
		s1[0] = '\0';
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[itwo])
	{
		str[i + itwo] = s2[itwo];
		itwo++;
	}
	str[i + itwo] = '\0';
	free(s1);
	return (str);


}


/*
int main()

{
	char *a = malloc((sizeof(char) * 6));
	char *b = malloc((sizeof(char) * 6));
	char c[] = "emon";
	char d[] = "emon";
	a = c;
	b = d;
	
	printf("valor = %s", ft_strjoin(a,b));
}
*/
