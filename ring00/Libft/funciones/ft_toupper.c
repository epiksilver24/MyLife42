/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:48:25 by scespede          #+#    #+#             */
/*   Updated: 2023/05/04 15:36:39 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
	{
		chr += 32;
	}
	return (chr);
  
  
}
int main ()
{
int i;
	i = 'a';
    while (i <= 'z')
    {
        c = ft_toupper(i);
        write(1, &c, 1);
        i++;
    }
}
