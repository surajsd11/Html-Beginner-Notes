#include <stdio.h>
int main()
{
    int x = 34;
    int *ptr = &x;
    printf("the value of x is %d\n", x);
    printf("the value of x is %d\n", *ptr);
    printf("the adress of x is %d\n", ptr);
    ptr++;
    printf("the adress of x is %d\n", ptr);
    printf("the value of x is %d\n", &x);
    

    return 0;
}
