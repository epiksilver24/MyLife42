/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:56:05 by scespede          #+#    #+#             */
/*   Updated: 2023/07/02 17:22:34 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


#ifndef BUFFER_SIZE
#	define BUFFER_SIZE 4
#endif

char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
char *ft_strchr(char *str, int c);
void *ft_calloc(size_t nmemb, size_t size);
void ft_bzero(void *s, size_t n);
char *ft_join(char *dest, char *s1, char *s2);
char	*free_storage(char *storage);
char *ft_free(char *res, char *buff);
char *red_file(int fd, char *str);
#endif

