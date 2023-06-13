/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:41:33 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 15:54:00 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "includes/libft.h"

int	ft_print_s(char *s, int *i)
{
	int	len;

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
		if (write(1, s, 1) == -1)
			return (-1);
		s++;
	}
	(*i)++;
	return (len);
}
