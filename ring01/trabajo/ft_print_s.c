/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:41:33 by scespede          #+#    #+#             */
/*   Updated: 2023/05/31 16:44:07 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_s(const char *str)
{
	int sizestr;

	sizestr = 0;
	while (*str != '\0')
	{
		write(1,str,1);	
		sizestr++;
	}
return (sizestr);
}
