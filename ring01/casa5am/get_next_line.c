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
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
	{
		free(left_str);
		left_str = NULL;
		return (NULL);
	}
	str[0] = '\0';
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n' && left_str[i])
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
	while (bytes > 0 && !ft_strchr(buff, '\n'))
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if(bytes > 0)
		{
		
		buff[bytes] = '\0';
		str = ft_strjoin(str, buff);
		}
	}
	free(buff);
	if(bytes == -1)
	{
		free(str);
		str = NULL;
		return (NULL);
	}
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
		return(NULL);
	line = ft_get_line(str);
	if(!line)
	{
		free(str);
		str = NULL;
		return NULL;
	}
	str = newstr(str);
	if (!str)
		return(NULL);
	return(line);
}
