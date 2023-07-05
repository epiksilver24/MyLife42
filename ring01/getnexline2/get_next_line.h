/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:39:05 by scespede          #+#    #+#             */
/*   Updated: 2023/07/02 17:47:13 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4
#endif

char *get_next_line(int fd);
char *red_line(int fd, char *str);
int ft_strlen(char *s);
char *ft_strjoin(char *s1, char *s2);
char *ft_join(char *s1, char *s2);
char *ft_strchr(char *str, int cha);

#endif
