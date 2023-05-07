/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:45:27 by scespede          #+#    #+#             */
/*   Updated: 2023/05/07 15:39:39 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int  num;
  size_t	count;
  size_t round;

  round = 0;

  num = 0;
  count = 0;
  if ((s1[count] == '\0' && s2[count] == '\0') || n == 0) {
 //printf("prmirer if\n");
  return (0);
  }
  
  while (s1[count] != '\0' && s2[count] != '\0' && round < n) {
      num += (s1[count] - s2[count]); 
      count++;
      round++;
  }
 
  
  num += (s1[count] - s2[count]); 
// printf("valor de num %d",s2[count]);
  return num;
  
}
/*
int main ()
{
  char  a[] = "test";
  char	b[] = "tests";
  printf("mi funcionsadas\nnum= %d",ft_strncmp(a, b, 6) );
}

*/
