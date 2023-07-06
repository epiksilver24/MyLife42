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
int main(int ac, char **av)
{
	int fd;
	int i;
	char *line;

	printf("file = %s\n", av[1]);
	i = 0;
	fd = open(av[1], O_RDONLY);
	while (i < 40)
	{
		line = get_next_line(fd);
		printf("return value %d: |%s|", i, line);
		printf("\\n\n");
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
