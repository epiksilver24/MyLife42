/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 09:13:28 by scespede          #+#    #+#             */
/*   Updated: 2023/05/15 12:28:02 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"


static size_t numword(const char *s, char sep)
{
	size_t count;
	size_t worlds;
	int sispace;
	char *str;

	str = (char *) s;
	sispace = 0;
	worlds = 0;
	count = 0;
	if (!str)
		return 0;
	while (str[count])
	{
		if(str[count] != sep)
			sispace = 1;
		if((str[count + 1] == sep || str[count + 1] == '\0') && sispace == 1)
		{
			worlds++;
			sispace = 0;
		}count++;
	}
	return worlds;
}

char	**ft_split(char const *s, char c)
{
	char **ptr;
	int	count;
	

	count = 0;
	ptr = (char **)malloc(sizeof(char *) * (numword(s,c ) + 1));
	if(!ptr)
		return NULL;


	return ptr;	
}

int main ()
{
	//char a[] = "pokemon digimon  monster rancher   hunter  ";
	char b[] = "1 2 3 4 5 6 7 8 9 0 ";
	char **ptr;

	ptr = ft_split(b,' ');
	
	printf("\nprimer indice\n %s",ptr[0]);
	printf("\nprimer indice\n %s",ptr[1]);
	printf("\nprimer indice\n %s",ptr[2]);
	printf("\nprimer indice\n %s",ptr[3]);
	printf("\nprimer indice\n %s",ptr[4]);
}
