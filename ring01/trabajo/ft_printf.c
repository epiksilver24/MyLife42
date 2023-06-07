/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:04:12 by scespede          #+#    #+#             */
/*   Updated: 2023/06/07 11:17:15 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h" 
#include <stdio.h>

static int checkprintf(va_list argv,char const *c1, int *i )
{
	int check;
	char *c = (char *)c1;

	check = 0;
	if (c[*i] != '%')
		check =	write(1,&c[*i],1);	
	else if (c[*i] == '%' && c[*i + 1] == '%')
		check =	write(1, &c[*i++], 1);	
	else if (c[*i] == '%' && c[*i + 1] == 's')
		check = ft_print_s(argv, i);
	else if (c[*i] == '%' && (c[*i + 1] == 'x' || c[*i + 1] == 'X'))
	{
		check = ft_printhex(argv, c[*i + 1]);
		i++;
	}
	else if (c[*i] == '%' && (c[*i + 1] == 'p'))
	{
		ft_print_ptr(argv);
		*i = *i + 1;
	}
	return (check);
	//
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
	while (c[i])
	{
		check = checkprintf(argv, c, &i);	
		if(check == -1)
			return (-1);
		total += check;
		i++;
	}
	va_end(argv);
	return (total);
}

int main()
{
	int a = 23;
	int *i = &a;
	printf("valor del puntero de i %p\n",i);
	ft_printf("pokemon %p azul %d",i,12);
	printf("\n");
}
