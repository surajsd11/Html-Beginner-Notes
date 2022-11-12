#include <stdio.h>
int sumt(int i, int z)
{
    int sum, subtract;
    sum = i + z;
    subtract = i - z;
    i = sum;

    z = subtract;
}

int main()
{
    int x = 4, y = 3;
    sumt(x, y);
    printf("the value of x is =%d\n", x);
    printf("the value of y is =%d", y);

    return 0;
}
