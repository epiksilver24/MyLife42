/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:45:35 by scespede          #+#    #+#             */
/*   Updated: 2023/06/26 18:40:06 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"





char *get_next_line(int fd)
{
	char *buff;
	int char_num;
	static char *str;
	
	if( fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc((sizeof(char)) * BUFFER_SIZE + 1);
	char_num = 1;
	while (!(ft_strchr(buff, '\n') && char_num != 0))
	{
		char_num = read(fd, buff, BUFFER_SIZE);
		if(char_num < 0)
		{
			free(BUFF);
			return NULL;
		}
		buff[char_num] = '\0';
		str = ft_strjoin(str, buff);
	}
}
