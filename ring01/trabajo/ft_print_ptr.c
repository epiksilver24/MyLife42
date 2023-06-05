/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:07:11 by scespede          #+#    #+#             */
/*   Updated: 2023/06/05 19:12:36 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "includes/ft_printf.h"

/*
static void hexdecimal_ptr(unsigned int num,  char f)
{
	if (num >= 16)
	{
		hexdecimal_ptr(num / 16, f);
		hexdecimal_ptr(num % 16, f);
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

void hexdecimal(int num, char f)
{
	if (num >= 16)
	{
		hexdecimal(num / 16, f);
		hexdecimal(num % 16, f);
	}
	else
	{
		char hexChar; // Variable para almacenar el carácter hexadecimal

		if (num <= 9)
		{
			hexChar = num + '0';
			write(1, &hexChar, 1);
		}
		else
		{
			if (f == 'x')
			{
				hexChar = (num - 10) + 'a';
				write(1, &hexChar, 1);
			}
			if (f == 'X')
			{
				hexChar = (num - 10) + 'A';
				write(1, &hexChar, 1);
			}
		}
	}
}



static int ft_print_ptr(va_list argv)
{
	unsigned long int num = va_arg(argv, unsigned long);
	hexdecimal(num, 'a');	


	return  0;
}

*/
#include "includes/ft_printf.h"

static void hexdecimal(unsigned long long num, char f)
{
    if (num >= 16)
    {
        hexdecimal(num / 16, f);
        hexdecimal(num % 16, f);
    }
    else
    {
        char hexChar; // Variable para almacenar el carácter hexadecimal

        if (num <= 9)
        {
            hexChar = num + '0';
            write(1, &hexChar, 1);
        }
        else
        {
            if (f == 'x')
            {
                hexChar = (num - 10) + 'a';
                write(1, &hexChar, 1);
            }
            if (f == 'X')
            {
                hexChar = (num - 10) + 'A';
                write(1, &hexChar, 1);
            }
        }
    }
}

int ft_print_ptr(va_list argv)
{
    unsigned long long address = va_arg(argv, unsigned long long); // Dirección de memoria del puntero

   // write(1, "La dirección de memoria del puntero es: ", 38);
   if (address == 0) {
   	write(1, "0x0", 3);
   }
   else 
   {
	   write(1, "0x", 2);
	   hexdecimal(address, 'x');
   }

    return 0;
}

