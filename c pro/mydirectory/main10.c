#include <stdio.h>
int sum()
{
    int a, b, sum;
    printf("enter the two number:\n");
    scanf("%d  %d", &a, &b);
    sum = a + b;
    printf("the sum of two number is %d\n", sum);
}
int sub()
{
    int a, b, sub;
    printf("enter the two number:\n");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("the sub of two number is %d", sub);
}
int main()
{
    printf("yo yo yoy yo:\n");
    sum();
    sub();
    return 0;
}