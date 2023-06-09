/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:42:31 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/09 15:44:30 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(char const *s, ...);

int	ft_print_s(va_list argv, int *i);

int ft_printhex(va_list argv, char t, int *i);

int ft_print_ptr(va_list argv, int *i);

int ft_print_c(va_list argv, int *i);

int ft_print_u(va_list argv, int *i);

int ft_print_d(va_list argv, int *i);

#endif
