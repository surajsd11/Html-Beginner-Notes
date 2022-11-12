#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter the number X : ");
    scanf("%d", &x);
    printf("enter the second number Y :");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("the new value of x:%d\n", x);
    printf("the new value of y:%d\n", y);
    printf(" suraj singh ECE B:");
    return 0;
}
