#include <stdio.h>
int	ft_strlen(char *str)
{
  int	count;
  count = 0;
  while (str[count] != '\0') {
  count++;
  }
  return count;
}
//
//int main ()
//{
//  char a[] = "pokemon";
//  printf("valor del nuemro %d", ft_strlen(a));
//}
