#include <stdio.h>
int main()
{
    int x, i,sum=0;
    printf("enter any integer number;\n");
    scanf("%d", &x);
    while (i <= x)
    {
        sum+=i;
        i=i+1;

        
    }printf("sum=%d",sum);
    return 0;
}
