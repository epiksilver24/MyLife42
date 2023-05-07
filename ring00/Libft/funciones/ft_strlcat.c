/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:35:29 by scespede          #+#    #+#             */
/*   Updated: 2023/05/06 23:02:48 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t destLeng;
  size_t srcLeng;
  size_t counter;

  counter = 0;
  destLeng = ft_strlen(dst);
  srcLeng = ft_strlen(src);
  if (!size) {
    return (srcLeng);
  }
  while (src[counter] && destLeng + counter < size - 1) {
      dst[destLeng + counter] = src[counter];
      counter++;
  }
  dst[destLeng + counter] = '\0';
  
  if (destLeng > size) {
      return (srcLeng + size);
  }

  return (destLeng + srcLeng);
}


//
//int main ()
//{
//  char f1[] = "pokemon";
//  char f2[] = "diamante";
//  size_t a = 3;
//
//  printf("valor de numero %d \t valor de la frase %s",ft_strlcat(f1, f2, a),f1);  
//}
//
