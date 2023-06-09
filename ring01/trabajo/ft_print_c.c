/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:56:08 by scespede          #+#    #+#             */
/*   Updated: 2023/06/09 13:08:54 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int ft_print_c(va_list argv, int *i)
{
	char a;

	a = va_arg(argv, int);
	if(write(1, &a, 1) == -1)
		return -1;
	(*i)++;
	return 1;
}
