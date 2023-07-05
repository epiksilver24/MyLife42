#include "get_next_line.h"


char *newstr(char *start)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	if(!start)
		return(NULL);
	while (start[i] && start[i] != '\n')
		i++;
//	if(!start[i])
//	{
//		free(start);
//		return(NULL);
//	}
	if(start[i] == '\n')
		i++;
	new_buff = (char *)malloc(1 + ft_strlen(start) - i);
	if (!new_buff)
	{
		free(start);
		return (NULL);
	}
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


char	*ft_get_line(char *left_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (NULL);
	while (left_str[i] && left_str[i] != '\n')
		i++;
	printf("get_line 1");
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	printf("malloc get_line 2");
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}



char *red_line(int fd, char *str)
{
	char *buff;
	int bytes;

	printf("red_line 1");
	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if(!buff)
		return (NULL);
	printf("red_line 2");
	buff[0] = '\0';
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if(bytes == 0)
			break;
		if(bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes] = '\0';
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
		if(str)
			free(str);
		return(NULL);
	}
	//line = cutstr(str);
	line = ft_get_line(str);
//	str = ft_next(str);
	str = newstr(str);
	if (!str || !line)
//	if ( !line)
	{
		if(str)
			free(str);
		if(line)
			free(line);
		return (NULL);
	}
	return(line);


}
