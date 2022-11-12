#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0, y = 1, z, t;
    printf("how much numnber you want to be add :");
    scanf("%d", &z);
     printf("the fibonacci series are : \n");
    for (int i = 0; i < z; i++)
    {
        t = x + y;
       

        printf(" %d\t", t);
        x = y;
        y = t;
    }
  

    return 0;
}
