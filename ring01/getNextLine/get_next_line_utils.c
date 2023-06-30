/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:23:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/30 19:53:27 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strchr( char *str, int c)
{
	int i;

	i = 0;
	if(!str)
		return (NULL);
		while (str[i])
		{
			if(str[i] == (char)c)
				return(&str[i]);
			i++;
		}
	
	return (NULL);
}

int ft_strlen(char *str)
{
	int	c;
	
	c = 0;
	if(!str)
		return (0);
	while (str[c])
	{
		c++;
	}
	
	return (c);
}

char *ft_strjoin(char *str, char  *buff)
{
	char *surt;

	if(!str)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
	}
	if(!str || !buff)
		return (NULL);
	surt = malloc((sizeof(char)) * (ft_strlen(str) + ft_strlen(buff) + 1));
	if(!surt)
		return (NULL);
	surt =	ft_join(surt, str, buff);
	if(!surt)
		{
			return (NULL);
		}
	free(str);
	return surt;



}
char *ft_join(char *dest, char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while(s2 && s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
		dest[i +j] = '\0';
	return (dest);

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
