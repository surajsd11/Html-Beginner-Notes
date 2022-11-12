#include <stdio.h>

// This is a global variable since it is declared inside main()

int func1(int b)
{
     b=3;
    printf("the adress is %d\n", &b);
   int c= b * 10;
    // static int myvar = 43;
    // printf("The value of myvar is %d\n", myvar);
    //  myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
}
int main()
{
    int b = 344;
     printf("the adress is %d\n", &b);
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    
    printf("the value %d\n", val);

    // int *ptr = &val;
    //  printf("The value of func1 is %d", val);
    //  printf("%d", loc);
    return 0;
}
