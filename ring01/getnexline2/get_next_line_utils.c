/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:48:30 by scespede          #+#    #+#             */
/*   Updated: 2023/07/02 19:02:09 by scespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(char *s)
{
	int i;

	i = 0;
	if(!s)
		return (0);
	while(s[i])
		i++;
	return (i);
	
}

char *ft_strjoin(char *s1, char *s2)
{
	char *res;

	if(!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if(!s1 || !s2)
		return (NULL);
	res = ft_join(s1,s2);
	if(!res)
		return (NULL);
	free(s1);
	return (res);
}

char ft_join( char *s1, char *s2)
{
	int i;
	int j;
	char *res;

	i = 0;
	j = 0;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!res)
		return (NULL);
	while(s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i +j] = '\0';
	return (res);
}
