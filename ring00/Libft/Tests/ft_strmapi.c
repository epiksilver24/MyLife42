/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epik <epik@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:08:38 by epik              #+#    #+#             */
/*   Updated: 2023/05/22 11:44:40 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	count;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	count = 0;
	while (str[count])
	{
		str[count] = (*f)(count, s[count]);
		count++;
	}
	return (str);
}
