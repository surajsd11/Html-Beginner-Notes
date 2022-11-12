#include <stdio.h>
int main()
{
    int x, i = 0;
    printf("enter any integer number;\n");
    scanf("%d", &x);
    while (i < x)
    {
        printf("%d\n", i+1);
        i = i + 1;
    }
    return 0;
}
