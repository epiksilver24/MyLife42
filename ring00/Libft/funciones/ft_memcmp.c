/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:17:42 by scespede          #+#    #+#             */
/*   Updated: 2023/05/09 16:22:06 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int fr_memcmp(const void *s1, const void *s2, size_t n)
{

	while (n-- > 0) {
		if (s1 != s2) {
			return ((char *)s1 - (char *)s2);	
		}	
	}
	return (0);
}
