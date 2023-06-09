/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:19:17 by scespede          #+#    #+#             */
/*   Updated: 2023/06/09 17:06:04 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printu(unsigned int i)
{
	char result;

	if(i >= 10)
		printu(i / 10);
	result = (i % 10 ) + '0';
	if(ft_printf("%c",result) == -1)
		return -1;
	return 0;

	
}

int ft_print_u(va_list argv, int *i )
{
	unsigned int	cha;

	cha = va_arg(argv, unsigned int);
	printu(cha);
	(*i)++;

	return 0;
}
