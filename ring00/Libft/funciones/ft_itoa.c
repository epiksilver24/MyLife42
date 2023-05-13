/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epik </var/spool/mail/epik>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:16:10 by epik              #+#    #+#             */
/*   Updated: 2023/05/13 16:31:56 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int lengn (int n)
{
	int count;
	count = 0;
	
	if (n < 0) {
	n *= -1;	
	}
 while (n > 0) {
  n /= 10;
  count++;
 }
 return count;
}
char	*ft_itoa(int n)
{
	int	copyn;
	size_t count;
	char	*str;

	count = 0;
	if (n == -2147483648)
		return ft_strdup("-2147483648");
	count = lengn(n);
	if (count == 0)
		return ft_strdup("0");
	if (n < 0)
  	{
		count++;
		copyn = n * -1;
  	}else
		copyn = n;
	str = malloc((sizeof(char)) * (count + 1));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	while (copyn > 0)
	{
		str[count--] = (copyn % 10) + '0';
		copyn /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return str;
}
//int main ()
//{
//  char *str;
//  str =NULL;
//  str =ft_itoa(-2147483648);
//  printf("valor de los numero %s",str);
//}
