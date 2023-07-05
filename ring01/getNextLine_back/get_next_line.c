/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:45:35 by scespede          #+#    #+#             */
/*   Updated: 2023/07/02 17:25:23 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>


char *red_file(int fd, char *res)
{
	char *buff;
	int int_bytes;

	if(!res)
	{
		res = malloc((sizeof(char)) * 1);
		res[0] = '\0';
	}
	buff = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if(!buff)
		return (NULL);
	int_bytes = 1;
	while (int_bytes > 0)
	{
		int_bytes = read(fd,buff,BUFFER_SIZE);
		if(int_bytes == -1)
		{
			free(buff);
			return NULL;
		}
		buff[int_bytes] = 0;
		res = ft_free(res,buff);
		if(ft_strchr(buff,'\n'))
			break;
	}
	free(buff);
	return(res);
}


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
	static char *str = NULL; 
	char *line;
	
	if( fd < 0 || BUFFER_SIZE <= 0)
	{
		if(str)
			free(str);
		return (NULL);
	}
	str = red_file(fd, str);
	if(!str)
		return NULL;
	line = cutstr(str);
	str = newstr(str);
	return (line);
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
