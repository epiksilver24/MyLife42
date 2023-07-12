#include <unistd.h> 
#include "ft_push_swap.h" 

int	*ft_atoi2(char *str , int *num)
{
	int	count;
	int	resta;

	resta = 0 ;
	*num = 0;
	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
		count++;
	if (str[count] == '-')
	{
		count++;
		resta++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] && str[count] >= '0' && str[count] <= '9')
	{
		*num = *num * 10;
		*num = *num + (str[count] - '0');
		count++;
	}
	if(str[count] !=  '\0')
		return (NULL);
	if (resta % 2 == 1)
		*num = *num * -1;
	return (num);
}

void	ft_lsitadd_back(t_ilist **lst, t_ilist *new)
{
	t_ilist	*ptr;

	ptr = *lst;
	if (*lst)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		printf("valor de next %p \n",ptr->next);
		ptr->next = new;
		printf("valor de ptr %d\n",ptr->num);
	}
	else
		*lst = new;
}

void ft_addindi(t_ilist **lst, int size)
{
	int  minnum;
	int indis;
	int posi;
	t_ilist *ptr;
	t_ilist *save;
	save = NULL;

	posi = 0;
	ptr = *lst;

	indis = 1;
	minnum = -2147483648;
	while (ptr)	
	{
		if(ptr->num > minnum)
			minnum = ptr->num;
		ptr = ptr->next;
	}
	ptr = *lst;
	while(ptr)
	{
		if(ptr->num < minnum)
			save = ptr;


	}
}


t_ilist	*ft_lsitnew(int content)
{
	t_ilist	*newnode;

	newnode = malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);
	newnode->num = content;
	newnode->indi = -1;
	newnode->next = NULL;
	return (newnode);
}



int	ft_lsitsize(t_ilist *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
