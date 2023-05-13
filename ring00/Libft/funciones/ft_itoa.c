/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epik </var/spool/mail/epik>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:16:10 by epik              #+#    #+#             */
/*   Updated: 2023/05/13 15:02:45 by epik             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
  int	numlen;
  int	copyn;
  size_t count;
  char	*str;

  count = 0;
  str = NULL;
  copyn = n;
 while (n > 0) {
  n /= 10;
  count++;
 }
 str = malloc((sizeof(char)) * (count + 1));
 if (!str) {
  return (NULL);
 }
 str[count--] = '\0';
  while (copyn > 0) {
    str[count--] = (copyn % 10) + '0';
    copyn /= 10;
  }

return str;
}
int main ()
{
  char *str;
  str =NULL;
  str =ft_itoa(46443);
  printf("valor de los numero %s",str);
}
