/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:37:24 by scespede          #+#    #+#             */
/*   Updated: 2023/06/10 16:51:52 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "includes/libft.h"
#include <unistd.h>

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

int ft_print_d(va_list argv, int *i)
{
	int num;
	char *str;
	int leng;
	

	num = va_arg(argv, int);
	str = ft_itoa(num);
//	leng = ft_strlen(str);
	if (!str)
		return (-1);	
	if (printstr(str) == -1)
		return (-1);	
	leng = ft_strlen(str);
	free(str);
	(*i)++;
	return (leng);
}


