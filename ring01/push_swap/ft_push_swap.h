/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:43:24 by scespede          #+#    #+#             */
/*   Updated: 2023/07/10 17:10:35 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <unistd.h>

#include "libft/libft.h"

typedef struct s_ilist
{
	int num;
	int indi;
	struct s_ilist *next;

}	t_ilist;


int parseargv(char **tab);
int *ft_atoi2(char *str , int *num);
t_ilist *ft_lsitnew(int content);
void ft_lsitadd_back(t_ilist **lst, t_ilist *new);
int ft_lsitsize(t_ilist *lis);
void ft_addindi(t_ilist **lst, int size);

#endif
