#include <stdio.h>
int main()
{
    int n, sum, average;
    printf(" Enter how many n number you want to sum\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    average = sum / 2;
    printf("the sum of n number = %d\n", sum);
    printf("the average = %d\n", average);
    printf("suraj singh ECE B");

    return 0;
}
