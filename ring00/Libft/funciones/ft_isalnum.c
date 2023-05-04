#include <unistd.h>

int	ft_isalnum(int a)
{
  if (((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) || (a >= '0' && a <= '9')){
    return 1024;
  }else 
    return 0;
}
//int main ()
//{
//  char a = ft_isalpha(';');
//  write(1,&a,1);
//}
