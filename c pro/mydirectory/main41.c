#include <stdio.h>

int main()
{
    int matrices1[100][100];
    int matrices2[100][100];
    int matrices3[100][100];
    int a, b, c, d, sum = 0;
    printf("enter how many row yo want in a :");
    scanf("%d", &a);
    printf("enter how many column yo want in a:");
    scanf("%d", &b);
    printf("\n");
    printf("enter how many row yo want in c:");
    scanf("%d", &c);
    printf("enter how many column yo want in c:");
    scanf("%d", &d);
    printf("\n");
    if (b == c)
    {
        printf("enter the first matrices :\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {

                scanf("%d", &matrices1[i][j]);
            }
           
        }
        printf("\n");
        printf("enter the second matrices :\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {

                scanf("%d", &matrices2[i][j]);
            }
           
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", matrices1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", matrices2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            for (int k = 0; k < b; k++)
            {
                sum += matrices1[i][k] * matrices2[k][j];
            }
            matrices3[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", matrices3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
