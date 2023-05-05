/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:24:12 by scespede          #+#    #+#             */
/*   Updated: 2023/05/05 10:31:09 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int	ft_isprint(int a)
{
  if ((a >= 32 && a <= 126) ) {
    return 1;
  }else 
    return 0;
}
/*
int main ()
{
	char a ;

	a = 62;

printf("es pimible : %d" ,ft_isprint('~') );
	
}
*/
