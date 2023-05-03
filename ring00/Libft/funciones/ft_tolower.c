#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_toupper(char str)
{
  return (str -  32) ;
   
}

//int main ()
//{
//  //char a = 'a';
//  //printf("%c --> %c\n",a,toupper(a));
//  //char b = 'a';
//  //printf("%c --> %c\n",b , ft_toupper(b));
//  printf("\nvalor del original upper %c\n",toupper(97));
//
//  printf("\npokemon %c\n", ft_toupper('y'));
//}
