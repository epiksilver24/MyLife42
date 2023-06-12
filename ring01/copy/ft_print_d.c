/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:37:24 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 14:57:25 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "includes/libft.h"
#include <unistd.h>
/*
static int printstr(char *str)
{
	int indi;

	indi = 0;
	while (str[indi] != '\0')
	{
		if (write(1, &str[indi], 1) == -1)
		{
			return (-1);	
		}
		
			indi++;
	}
	return (1);
}
static int putchars(long int c)
{
	if(write(1, &c, 1) == -1 )
		return (-1);
	return (1);
}

static int	putnbr(int num1)
{
	long int num;

	num = (long) num1;
	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		num = -num;
	}
	if (num >= 10)
	{
		putnbr(num / 10);
//		if (ft_printf("%c", (num % 10 + '0')) == -1)
//			return (-1);
		num = num % 10;
	}
	if (num < 10)
	{
		if (putchars(num % 10 + '0') == -1)
			return (-1);
	}
	return (1);
}

static int lengnum (int num )
{
	int count;

	count = 0;
	if (num <= 0)
{
		count++;
		num = num * -1;
}
	while (num > 0)
	{
	 num /= 10;

		count++;
	}
	return count;
}

int ft_print_d(va_list argv, int *i)
{
	int num;
	int leng;

	num = va_arg(argv, int);
	if (num == -2147483648)
	{
		if (ft_printf("-2147483648") == -1)
			return (-1);
		(*i)++;
		return (11);
	}
	if(putnbr(num) == -1)
	{
		printf("Hola");
		return (-1);
	}
	(*i)++;
	leng = lengnum(num);
	return (leng);
}

*/




int ft_print_d(int num, int *i)
{
	int len;
	char *str;
	str = ft_itoa(num);
	if (str == NULL)
		return (-1);
	len = ft_printf("%s",str);
	free(str);
	if (len == -1)
		return (-1);
	(*i)++;
	return (len);


}
