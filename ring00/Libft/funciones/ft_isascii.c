/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:07:36 by scespede          #+#    #+#             */
/*   Updated: 2023/05/06 11:07:55 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int a)

{

  if (a >= 0 && a <= 127) {
    return 1024;
  }else 
    return 0;
}
//{
////  char a = ft_isalpha(';');
////  write(1,&a,1);
////}