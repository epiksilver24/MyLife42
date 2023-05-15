/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 02:35:06 by scespede          #+#    #+#             */
/*   Updated: 2023/05/10 09:28:36 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_putstr_fd(const char *str, int fd)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_putchar_fd(str[i], fd))
		i++;
	if (!str)
		return (1);
	return (0);
}
