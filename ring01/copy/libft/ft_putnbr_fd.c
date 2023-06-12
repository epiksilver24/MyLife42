/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:23:37 by scespede          #+#    #+#             */
/*   Updated: 2023/06/12 12:00:02 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int num1, int fd)
{
//	if (num == -2147483648)
//	{
//		ft_putstr_fd("-2147483648", fd);
//		return (1);
//	}
	long int num;

	num = (long) num1;
	if (num < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		if (ft_putchar_fd(num % 10 + '0', fd) == -1)
			return (-1);
	}
	if (num < 10)
	if (ft_putchar_fd(num % 10 + '0', fd) == -1)
		return (-1);
	return (1);
}

//int main()
//{
//  ft_putnbr_fd(123, 1);
//}
