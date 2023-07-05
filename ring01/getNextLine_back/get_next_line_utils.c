/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:23:35 by scespede          #+#    #+#             */
/*   Updated: 2023/07/02 17:15:32 by scespede         ###   ########.fr       */
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
	if (c == '\0')
		return (&str[i]);
	
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
/*
char *ft_strjoin(char *str, char  *buff)
{
	char *surt;

	if(!str)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	if(!str || !buff)
		return (NULL);
	surt = malloc((sizeof(char)) * (ft_strlen(str) + ft_strlen(buff) + 1));
	if(!surt)
		return (NULL);
	surt =	ft_join(surt, str, buff);
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
*/
char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	c;
	char	*str;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (free_storage(s1));
	i = -1;
	c = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[c] != '\0')
		str[i++] = s2[c++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}
char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}


char	*free_storage(char *storage)
{
	free(storage);
	storage = NULL;
	return (NULL);
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

