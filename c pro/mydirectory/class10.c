#include <stdio.h>
int main()
{
    int a, b, c, d, max;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second  number :");
    scanf("%d", &b);
    printf("enter the third number :");
    scanf("%d", &c);
    printf("enter the fourth  number :");
    scanf("%d", &d);
    max=(a>b && a>c && a>d)?a:(b>c && b>d)?b:(c>d ? c:d);
    printf("\nlargest number among %d ,%d ,%d and %d is %d",a,b,c,d,max);
    printf("\nSuraj singh ECE B :");


    return 0;
}
