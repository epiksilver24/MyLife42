/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:07:14 by scespede          #+#    #+#             */
/*   Updated: 2023/05/04 15:29:29 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
#define libft

#include  <unistd.h>


int	ft_toupper(int chr);



char	*ft_strchr(char *str , int charac);

int	ft_isalnum(int a);



int	ft_isalpha(int a);


int ft_isdigit(int a);


int	ft_isascii(int a);
#endif
