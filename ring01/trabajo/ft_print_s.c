/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:41:33 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 12:26:58 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "includes/libft.h"

int	ft_print_s(va_list argv, int *i)
{
	char *s;
	int len;
	s = va_arg(argv, char *);
	if (!s)
	{
		if (write (1, "(null)", 6) == -1)
			return (-1);
		(*i)++;
		return (6);
	}
	len = ft_strlen(s);
	while (*s)
	{
		if(write(1,s,1) == -1)
			return (-1);
		s++;
	}
	(*i)++;
	return (len);
}
