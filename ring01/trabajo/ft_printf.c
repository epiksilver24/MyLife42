/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:04:12 by scespede          #+#    #+#             */
/*   Updated: 2023/05/31 15:10:57 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_printf(char const *c, ...)
{

	while (*c)
	{
		if (*c == '%') {
			printf("pokemon");	
		}
		c++;
	
	}

	return 0;
}

int main()
{
	char p[] = "pokemon";

	ft_printf("hola como %estamos",p);
}
