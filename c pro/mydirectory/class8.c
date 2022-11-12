#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the number x : ");
    scanf("%d", &x);
    printf("enter the second number y:");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf("the new value of x:%d\n", x);
    printf("the new value of y:%d\n", y);
    printf(" suraj singh ECE B:");
    return 0;
}
