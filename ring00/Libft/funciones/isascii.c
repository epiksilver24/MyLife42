#include <unistd.h>

int	ft_isascii(int a)

{

  if (a >= 0 && a <= 127) {
    return 1024;
  }else 
    return 0;
}
int main ()
//{
////  char a = ft_isalpha(';');
////  write(1,&a,1);
////}
