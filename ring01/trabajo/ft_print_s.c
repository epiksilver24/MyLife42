/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:41:33 by scespede          #+#    #+#             */
/*   Updated: 2023/06/07 12:37:40 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int strleng(char *str)
{
	int count;
	
	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_print_s(va_list argv, int *i)
{
	int check;
	char *str;

	str = va_arg(argv, char *);
	check = 0;
		check = write(1, str, strleng(str));	
		if (check == -1)
			return -1;
		i++;
		printf("valor de i %d \n",*i);
	return (check);
}
