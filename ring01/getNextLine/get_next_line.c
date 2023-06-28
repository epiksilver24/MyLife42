/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:45:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/28 14:05:33 by scespede         ###   ########.fr       */
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
	s = malloc((sizeof(char) * (i + 1)));
	if (!s)
		return (NULL);
	while (b < i)
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
	while(str[i] && str[i] == '\n')
		i++;
	while(str[i + s] && str[i + s] != '\n')
	{
		s++;
	}
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
	return (news);
	
}

char *get_next_line(int fd)
{
	char *buff;
	int char_num;
	static char *str;
	char *s;
	
	if( fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = NULL;
	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if(!buff)
		return NULL;
	buff[BUFFER_SIZE] = '\0';
	char_num = 1;
	while (!(ft_strchr(str, '\n')) && char_num != 0)
	{
		char_num = read(fd, buff, BUFFER_SIZE);
		if(char_num == 0)
		{
			return "";
		}
		if(char_num < 0)
		{
			free(buff);
			return NULL;
		}
		//buff[char_num] = '\0';
		str = ft_strjoin(str, buff);
	}
	
	s = cutstr(str);
	str = newstr(buff);
	return (s);
}
int main()
{
	int fd;

	fd = open("hola.txt",O_RDONLY);
	int a = 0;

	while (a < 10)
	{
		printf("%s\n",get_next_line(fd));
		a++;
	}
	close(fd);
	return (0);
}
