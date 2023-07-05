#include "get_next_line.h"


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


char *cutstr(char *str)
{
	int i;
	char *ptr;

	i = 0;
	if(!str)
		return NULL;
	
	while(str[i] && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	ptr = malloc(i + 1);
	if(!ptr)
		return (NULL);
	i = 0;
	while(str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ptr[i] = '\n';
		ptr[i++] = '\0';
		return (ptr);

	}
		ptr[i++] = '\0';
	return (ptr);

}

char *red_line(int fd, char *str)
{
	char *buff;
	int bytes;

	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if(!buff)
		return (NULL);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if(bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[BUFFER_SIZE] = 0;
		str = ft_strjoin(str, buff);
		if(!str)
		{
			free(buff);
			return (NULL);
		}
		if(ft_strchr(str , '\n'))
			break;
	}
	free(buff);
	return (str);
}



char *get_next_line(int fd)
{
	static char *str;
	char *line;
	line = NULL;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	str = red_line(fd , str);
	if(!str)
	{
	//	free(str);
		return(NULL);
	}
	line = cutstr(str);
	str = newstr(str);
	if (!str || !line)
	//if ( !line)
	{
		free(str);
		if(line)
			free(line);
		return (NULL);
	}
	return(line);


}
