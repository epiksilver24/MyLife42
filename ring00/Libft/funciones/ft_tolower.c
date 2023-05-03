#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_toupper(int str)

{
  printf("valor de str %c",str);
write(1,&str,1);
  
  int b = 0;
  if (str >= 'a' && str <= 'z') {
    b = str + 32;
    printf("valor de b %c",b);
    return str + 32; 
  }
    printf("hola");
  return str;
}

int main ()
{
  char a = 'a';
  printf("%c --> %c\n",a,toupper(a));
  char b = 'a';
  printf("%c --> %c\n",b , ft_toupper(b));

}
