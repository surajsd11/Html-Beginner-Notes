#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int x, i;
    printf("enter the how many array you want:");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("enter the element - %d :", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < x; i++)
    {
        printf("the element you have stored is = %d\n", a[i]);
    }
    printf("the element you have copied is =");
    for (i = 0; i < x; i++)
    {

        printf("% 5d  ", a[i]);
    }
    return 0;
}
