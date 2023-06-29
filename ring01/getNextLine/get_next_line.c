/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:45:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/29 13:49:46 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

static char *cutstr(char *str)
{
	char *s;
	int i;
	int b;	
	i = 0;
	b = 0;
	while ((str[i] && str[i] != '\n'))
		i++;
	if(str[i] == '\n')
		i++;
	s = malloc((sizeof(char) * (i + 1)));
	if (!s)
		return (NULL);
	while (b <= i)
	{
		s[b] = str[b];
		 b++;
	}	
	s[b] = '\0';
	return (s);

}
char *newstr(char *str)
{
	char *news;
	int i;
	int s;
	int b;

	b = 0 ;
	i = 0;
	s = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	while(str[i + s] && str[i + s] != '\n')
		s++;
	news = malloc((sizeof(char) * (s + 1)));
	if(!news)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		news[b++] = str[i];
		i++;
	}
	news[b] = '\0';
	free(str);
	str = NULL;
	return (news);
	
}

char *get_next_line(int fd)
{
	char *buff;
	int char_num;
	static char *str = NULL; 
	char *s;
	//printf("valor buffersize = %d\n",BUFFER_SIZE);
	
	if( fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if(!buff)
		return NULL;
	
	char_num = 1;
		
	while (!str || ( buff &&  !(ft_strchr(str, '\n')) && char_num > 0 ))
	{
		
		char_num = read(fd, buff, BUFFER_SIZE);
<<<<<<< HEAD
		if(char_num <= 0)
=======
		if(char_num < 1)
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
		{
			free(buff);
			return NULL;
		}
<<<<<<< HEAD
=======
		buff[char_num] = '\0';
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
		str = ft_strjoin(str, buff);

	}
	free(buff);	
	buff = NULL;
	s = cutstr(str);
	if(!s)
	{
<<<<<<< HEAD

	}
	str = newstr(buff);
=======
		free(str);
		str = NULL;
		return NULL;
	}
	str = newstr(str);
	if (!str)
	{
		free(str);
		str = NULL;
		return NULL;
	}
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
	return (s);
}
/*
int main()
{
	int fd;
	char *str;
	int a = 0;

	fd = open("hola.txt",O_RDONLY);
	while (a < 5)
	{
<<<<<<< HEAD
		char *s = get_next_line(fd);
		printf("%s", s);
=======
		printf("%s\n", get_next_line(fd));
>>>>>>> 9c1d22abc59d3dc297525e328986713acdc7fcf9
		a++;
	}
	close(fd);
	return (0);
}
*/
