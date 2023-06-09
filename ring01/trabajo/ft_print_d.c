/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:37:24 by scespede          #+#    #+#             */
/*   Updated: 2023/06/09 15:46:56 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}


static char	*ft_strdup(const char *s)
{
	size_t	leng;
	char	*ptr;

	ptr = NULL;
	leng = ft_strlen(s);
	ptr = (char *)malloc(leng + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, leng + 1);
	return (ptr);
}


static int	lengn(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
	n /= 10;
	count++;
	}
	return (count);
}

static char	*ft_itoa(int n)
{
	int		copyn;
	size_t	count;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = lengn(n);
	if (count == 0)
		return (ft_strdup("0"));
	if (n < 0)
		copyn = n * -1;
	else
		copyn = n;
	str = malloc((sizeof(char)) * (count + 1));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	while (copyn > 0)
	{
		str[count--] = (copyn % 10) + '0';
		copyn /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int ft_print_d(va_list argv, int *i)
{
	int	num;
	char *str;

	num = va_arg(argv, int);
	str = ft_itoa(num);
	if (!str)
		return (-1);
	while(*str)
	{
		if(write(1, str, 1) == -1)
			return -1;
		str++;
	}
	(*i)++;
	return 0;
}


