#include "ft_printf.h"
#include "includes/libft.h"
#include <stdio.h>

int main()
{
	int valuep;
	int d = 1;
	char s[] = "hola como estas";
	int u = 3243;
//	ft_printf("s = %s\nx = %x\nX = %X\nc = %c\nu = %u\nu = %u",b ,a, a, c,a, u );

	printf("imprimir int\n");
	valuep = ft_printf("%d",d);
	ft_printf("\nvalor de print anterior = %d\n", valuep);

}
