/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:19:17 by scespede          #+#    #+#             */
/*   Updated: 2023/06/09 15:37:53 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	lengn(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
	n /= 10;
	count++;
	}
	return (count);
}

static char	*ft_utoa(unsigned int n)
{
	char	*str;
	unsigned int count;

	count = lengn(n);

	str = malloc((sizeof(char)) * (count + 1));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	while (n > 0)
	{
		str[count--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int ft_print_u(va_list argv, int *i )
{
	unsigned int num;
	char *str;
	   
	num	= va_arg(argv, unsigned int);
	str = ft_utoa(num);
	if(!str)
		return (-1);
	while(*str)
	{
		if(write(1, str, 1) == -1)
			return -1;
		str++;
	}
	free(str);
	(*i)++;
	return 0;
}
