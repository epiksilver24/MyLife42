#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a)
{
  if (a > 31 && a < 127) {
    return 1;
  }
  else 
    return 0;
}

int	main ()
{
 // int a = 1;
 // while (a <= 127) {
 //   if (isprint(a)!= 0) {
 //   printf("valor de %d , carcter %c\n",a,a);
 //   }
 //   a++;
  
 // }
 
  printf("valor de ft_isprint %d\n", ft_isprint(33));
  printf("valor de ft_isprint %d\n", ft_isprint(77));
  printf("valor de ft_isprint %d\n", ft_isprint(84));
  printf("valor de ft_isprint %d\n", ft_isprint(127));
 
  printf("original funcion\n");
  printf("valor de la orginal %d\n", isprint(33));
  printf("valor de la orginal %d\n", isprint(77));
  printf("valor de la orginal %d\n", isprint(84));
  printf("valor de la orginal %d\n", isprint(127));
 
}
//{
////  char a = ft_isalpha(';');
////  write(1,&a,1);
////}
