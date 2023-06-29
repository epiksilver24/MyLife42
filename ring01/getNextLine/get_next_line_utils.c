/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:23:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/29 13:49:53 by scespede         ###   ########.fr       */
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

char *ft_strjoin(char *str, char  *buff)
{
	char *s;
	size_t	leng;
	int	i;
	int itwo;

<<<<<<< HEAD
	s = NULL;
	itwo = 0;
	i = 0;
	if(!str)
=======
	i = 0;
	itwo = 0;
	if(!s1)
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
	{
		str = malloc(sizeof(char) * 1);
		if(!str)
			return (NULL);
		str[0] = '\0';
	}
<<<<<<< HEAD
	if(!str || !buff)
		return NULL;
	leng = ft_strlen(str)  + ft_strlen( buff) + 1;
	s = malloc((sizeof(char) * leng));
	if(!str)
		return (NULL);

	while (str[i])
=======
	leng = ft_strlen(s1)  + ft_strlen(s2) + 1;
	str = malloc((sizeof(char) * leng));
	if(!str)
	{
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	while (s1[i])
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
	{
		s[i] = str[i];
		i++;
	}
	while (buff[itwo])
	{
		s[i + itwo] = buff[itwo];
		itwo++;
	}
	s[i + itwo] = '\0';
	free(str);
	return (s);


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