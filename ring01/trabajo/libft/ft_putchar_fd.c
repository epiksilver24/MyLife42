/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 02:16:38 by scespede          #+#    #+#             */
/*   Updated: 2023/05/26 11:55:11 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(int c, int fd)
{
	if (ft_isascii(c))
	{
		write(fd, &c, 1);
		return (1);
	}
	return (0);
}
//int main ()
//{
//  printf("\ncuanto vale lo que le paso = %d\n",ft_putchar_fd(112,3));
//}
