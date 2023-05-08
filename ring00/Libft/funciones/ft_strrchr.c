/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:54:23 by scespede          #+#    #+#             */
/*   Updated: 2023/05/08 10:25:22 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strrchr(const char *str , int c)
{
  char *ptr;

  ptr = NULL;

ptr = 0;
//  if (!str) {
//  return (NULL);
//  }
  size_t count;

  count = 0;
  while (str[count] != '\0') {
      if (str[count] == (char )c) {
	  ptr = (char *) str; 
      } 
      str++;
  }
  if (str[count] == (char)c) {
    return (char *)&str[count]; 
  }

  return ptr;

  
}
//
//int main ()
//{
//  char a [] = "periscopio";
//  printf("farase a devolver %s",ft_strrchr(a, 	112));
//}
