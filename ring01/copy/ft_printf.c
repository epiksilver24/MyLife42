/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:04:12 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 15:42:27 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
#include <stdio.h>

static int checkprintf(va_list argv,char const *c1, int *i )
{
	int check;
	char *c = (char *)c1;

	check = 0;
	if (c[*i] != '%')
		check =	write(1, &c[*i],1);	
	else if (c[*i] == '%' && c[*i + 1] == '%')
		{
			check =	write(1, &c[*i], 1);	
			(*i)++;
		}
	else if (c[*i] == '%' && c[*i + 1] == 's')
		check = ft_print_s(va_arg(argv, char *), i);
	else if (c[*i] == '%' && (c[*i + 1] == 'x' || c[*i + 1] == 'X'))
		check = ft_printhex(va_arg(argv, unsigned int), c[*i + 1], i);
	else if (c[*i] == '%' && (c[*i + 1] == 'p'))
		check = ft_print_ptr(va_arg(argv, unsigned long long), i);
	else if (c[*i] == '%' && (c[*i + 1] == 'c'))
	{
		//check =	ft_print_c(va_arg(argv, int), i);
		int ch;
		ch = va_arg(argv, int);
		if ( write(1, &ch,1) == -1)
			return (-1);
		check = 1;
		(*i)++;
	}
	else if (c[*i] == '%' && (c[*i + 1] == 'u'))
		check = ft_print_u(va_arg(argv, int), i);
	else if (c[*i] == '%' && ((c[*i + 1] == 'd') || c[*i + 1] == 'i'))
		check = ft_print_d(va_arg(argv, int), i);
	return (check);
}

int ft_printf(char const *c, ...)
{
	int	i;
	va_list	argv;
	int check;	
	int total;
	va_start(argv, c);
	total = 0;	
	i = 0;
	check = 0;
	while (c[i] && check != -1)
	{
		check = checkprintf(argv, c, &i);	
		if (check == -1)
			return (-1);
		total += check;
		i++;
	}
	va_end(argv);
	return (total);
}
/*
int main()
{
	int a = -10;
//	char a[] = "hola %% pokwmon %%%";
//	int u = 3243;
//	ft_printf("s = %s\nx = %x\nX = %X\nc = %c\nu = %u\nu = %u",b ,a, a, c,a, u );
//	printf("my funcion\n");
//	ft_printf("value %d",a);
//	printf("hexadecimal = ||);
//	printf("\nsu funcion\n");
//	printf("value %d",a);
	int my;
	int pt;
//	printf("\n");
	my = ft_printf("%x",a);

	printf("\n");
	pt = printf("%x",a);

//	printf("\n");

	printf("valor de my = %d",my);

//	printf("\n");
	printf("valor de pt = %d",pt);
}*/
