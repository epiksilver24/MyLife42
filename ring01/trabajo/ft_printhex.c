/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:12:17 by scespede          #+#    #+#             */
/*   Updated: 2023/06/02 15:29:25 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void hexdecimal(int num,  char f)
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
			write(1, &num,1);
		}
		else
		{
			if (f == 'x')
			{
				num = (num - 10 + 'a');
				write(1, &num,1);	
			}
			if (f == 'X')
			{
				num = (num - 10 + 'A');
				write(1, &num,1);	
			}
		}
	}
}

int sizehex(int num)
{
	int count;

	count = 0;

	while (num != 0)
	{
		count++;
		num /= 16;
	}
	return (count);
}

int ft_printhex(va_list argv , char t)
{
	int num;

	num = va_arg(argv, int);
	if (num == 0) {
		return(0);		
	}
	hexdecimal(num, t);
	return(sizehex(num));

//	printf("hola como estamos %x",a);
}
