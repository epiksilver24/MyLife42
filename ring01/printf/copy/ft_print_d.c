/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:37:24 by scespede          #+#    #+#             */
/*   Updated: 2023/06/13 12:55:11 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "includes/libft.h"
#include <unistd.h>

int	ft_print_d(int num, int *i)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	if (str == NULL)
		return (-1);
	len = ft_printf("%s", str);
	free(str);
	if (len == -1)
		return (-1);
	(*i)++;
	return (len);
}
