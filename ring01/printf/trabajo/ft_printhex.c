/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:12:17 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 14:15:52 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int hexdecimal(unsigned int num,  char f)
{
	if (num >= 16)
	{
		hexdecimal(num / 16, f);
		hexdecimal(num % 16, f);
	}
	else
	{
		if (num <= 9)
		{
			num += '0';
			if(write(1, &num,1) == -1)
				return (-1);
		}
		else
		{
			if (f == 'x')
			{
				num = (num - 10 + 'a');
			if(	ft_printf("%c",num) == -1)
				return (-1);	
			}
			if (f == 'X')
			{
				num = (num - 10 + 'A');
			if(	ft_printf("%c",num) == -1)
				return (-1);	
			}
		}
	}
	return (1);
}

int sizehex(unsigned int num)
{
	int count;

	count = 0;
	if (num == 0) 
		return (1);	

	while (num != 0)
	{
		count++;
		num /= 16;
	}
	return (count);
}

int ft_printhex(va_list argv , char t, int *i)
{
	unsigned int num;
	
	num = va_arg(argv, unsigned int);
	if(hexdecimal(num, t) == -1)
		return (-1);
	(*i)++;
	return(sizehex(num));
//	printf("hola como estamos %x",a);
}
