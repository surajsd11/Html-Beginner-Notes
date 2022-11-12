#include <stdio.h>

void printStr()
{
  char str[34] = "suraj";
  printf("the value is =%s", str);
}
int main()
{
  int str[5] = {1, 2, 3, 4, 5};
  str[2]=4;
 int x=str[4];
  for(int i=0;i<=4;i++){
  printf("%d\n",str[i]);}
  printf("%d\n",x);
  printStr();

  return 0;
}
