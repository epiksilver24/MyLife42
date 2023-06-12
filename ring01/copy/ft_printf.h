/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:42:31 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/12 14:57:16 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(char const *s, ...);

int	ft_print_s(char *s, int *i);

int ft_printhex(unsigned  int num, char t, int *i);

int ft_print_ptr(unsigned long long address, int *i);

int ft_print_c(int a, int *i);

int ft_print_u(unsigned int cha, int *i);

int ft_print_d(int num, int *i);

#endif
