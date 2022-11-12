#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second  number :");
    scanf("%d", &b);
    printf("enter the third number :");
    scanf("%d", &c);
    printf("enter the fourth number :");
    scanf("%d", &d);

    if (a > b && a > c && a>d)
    {
        printf("first number is the largest number :%d\n", a);
    }
    else if (b > c && b > d)
    {
        printf("second number is the largest number :%d\n", b);
    }
    else if (c > d)
    {
        printf("third number is the largest number :%d\n", c);
    }
    else
    {
        printf("fourth number is the largest number :%d\n", d);
    }
    printf("suraj singh ECE B :");

    return 0; 
}
