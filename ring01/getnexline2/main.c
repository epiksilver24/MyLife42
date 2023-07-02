#include "get_next_line.h"
/*
int main()
{
	int fd;
	char *str;
	int a = 0;

	fd = open("hola.txt",O_RDONLY);
	while (a < 5)
	{
		str = get_next_line(fd);
		if (str)
			printf("%s", str);
		a++;
	}
	close(fd);
	return (0);
}
*/
int main()
{
	int fd;
	int i;
	char *line;

	i = 0;
	fd = open("hola.txt", O_RDONLY);
	while (i < 10)
	{
		line = get_next_line(fd);
		printf("return value %d: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
