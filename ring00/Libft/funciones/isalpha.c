#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


int	ft_isalpha(int a)
{
  if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
    return 1024;
  }else 
    return 0;
}
//int main ()
//{
//  char a = ft_isalpha(';');
//  write(1,&a,1);
//}
//
int main ()
{
  printf("\nvalor de mi ft_isalpha %d",ft_isalpha('p'));
  printf("\nvalor de la funcion de C %d",isalpha('g'));



   char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

    c = '2';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));

    c='3';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

    return 0;
} 
