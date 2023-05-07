/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:07:14 by scespede          #+#    #+#             */
/*   Updated: 2023/05/07 02:34:05 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef libft
#define libft
#include <stddef.h>
#include <unistd.h>


int	ft_toupper(int chr);

int	ft_isalnum(int a);

int	ft_isalpha(int a);

int ft_isdigit(int a);

int	ft_isascii(int a);

int ft_isprint(int a);

int ft_tolower(int chr);

size_t ft_strlen(const char *str);

size_t ft_strlcpy(char *dest, char *src, size_t destsize);

char *ft_strchr(const char *str, int charac);

char *ft_strrchr(const char *str , int charac);

size_t ft_strlcat(char *dst, const char *src, size_t size);

int ft_putchar_fd(int c, int fd);

int ft_putstr_fd(const char *str, int fd);

#endif
