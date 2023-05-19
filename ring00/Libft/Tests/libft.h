/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:07:14 by scespede          #+#    #+#             */
/*   Updated: 2023/05/17 17:44:55 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_toupper(int chr);

int		ft_isalnum(int a);

int		ft_isalpha(int a);

int		ft_isdigit(int a);

int		ft_isascii(int a);

int		ft_isprint(int a);

int		ft_tolower(int chr);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_putchar_fd(int c, int fd);

int		ft_putstr_fd(const char *str, int fd);

int		ft_putnbr_fd(int num, int fd);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(const char *dest, const char *src, size_t destsize);

void	*ft_calloc(size_t nmemb, size_t size);

void	ft_putendl_fd(char *str, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strrchr(const char *str, int charac);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strchr(const char *str, int charac);

char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_itoa(int num);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	**ft_split(char const *s, char c);

#endif
