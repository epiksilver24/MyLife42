#include "get_next_line.h"

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
