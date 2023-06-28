/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:56:05 by scespede          #+#    #+#             */
/*   Updated: 2023/06/28 12:13:57 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#	define BUFFER_SIZE 4
#endif

char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
char *ft_strchr(const char *str, int c);

#endif

