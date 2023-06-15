/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:01:52 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 16:03:12 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	numcharacter(unsigned long long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (0);
	while (num != 0)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

static int	charprint(char f, int num)
{
	char	hexchar;

	if (f == 'x')
	{
		hexchar = (num - 10) + 'a';
		if (write(1, &hexchar, 1) == -1)
			return (-1);
	}
	if (f == 'X')
	{
		hexchar = (num - 10) + 'A';
		if (write(1, &hexchar, 1) == -1)
			return (-1);
	}
	return (1);
}

static int	hexdecimal(unsigned long long num, char f)
{
	char	hexchar;

	if (num >= 16)
	{
		hexdecimal(num / 16, f);
		hexdecimal(num % 16, f);
	}
	else
	{
		if (num <= 9)
		{
			hexchar = num + '0';
			if (write(1, &hexchar, 1) == -1)
				return (-1);
		}
		else
		{
			if (charprint(f, num) == -1)
				return (-1);
		}
	}
	return (1);
}

int	ft_print_ptr(unsigned long long address, int *i)
{
	int	a;

	if (address == 0)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		(*i)++;
		return (3);
	}
	else
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		if (hexdecimal(address, 'x') == -1)
			return (-1);
	}
	(*i)++;
	a = numcharacter(address);
	if (address == 0)
	{
		return (5);
	}
	return (a + 2);
}
