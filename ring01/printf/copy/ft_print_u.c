/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:19:17 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 16:05:28 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "includes/libft.h"

static int	ft_icount(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_uitoa(unsigned int n)
{
	char				*arr;
	int					count;
	unsigned int		d;
	long int			nb;

	nb = n;
	count = ft_icount(nb);
	arr = ft_calloc(count + 1, sizeof(char));
	if (!arr)
		return (NULL);
	while (count--)
	{
		d = nb / 10;
		arr[count] = 48 + nb % 10;
		nb = d;
	}
	return (arr);
}

int	ft_print_u(unsigned int cha, int *i )
{
	int		leng;
	char	*str;

	str = ft_uitoa(cha);
	if (str == NULL)
		return (-1);
	if (ft_printf("%s", str) == -1)
	{
		free(str);
		return (-1);
	}
	free(str);
	(*i)++;
	leng = ft_icount(cha);
	return (leng);
}
