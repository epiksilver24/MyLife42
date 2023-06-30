/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:45:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/30 19:53:01 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

static char *cutstr(char *str)
{
	int i;
	char *ptr;

	i = 0;

	if(!str || !str[0])
		return NULL;
	while (str[i] && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if(!ptr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if(str[i] == '\n')
		ptr[i++] = '\n';	
	ptr[i] = '\0';
	return (ptr);
}
char *newstr(char *start)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	while (start[i] && start[i] != '\n')
		i++;
	if (start[i] == '\0')
	{
		free(start);
		return (NULL);
	}
	i += (start[i] == '\n');
	new_buff = (char *)malloc(1 + ft_strlen(start) - i);
	if (!new_buff)
		return (NULL);
	j = 0;
	while (start[i + j])
	{
		new_buff[j] = start[i + j];
		j++;
	}
	new_buff[j] = '\0';
	free(start);
	return (new_buff);
}

char *get_next_line(int fd)
{
	char *buff;
	int char_num;
	static char *str = NULL; 
	
	if( fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1)); 
	if(!buff)
		return NULL;
	char_num = 1;
	while ( !(ft_strchr(str, '\n')) && char_num != 0 )
	{
		char_num = read(fd, buff, BUFFER_SIZE);
		if(char_num <= -1)
		{
			free(buff);
			return NULL;
		}
		buff[char_num] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	buff = cutstr(str);
	str = newstr(str);
	return (buff);
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
		char *s = get_next_line(fd);
		printf("%s", s);
		a++;
	}
	close(fd);
	return (0);
}
*/
