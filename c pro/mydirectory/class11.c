#include <stdio.h>

int main()
{
    float b;
    printf("enter your overall percentage :");
    scanf("%f", &b);
    if (b <= 100 && b >= 90)
    {
        printf("congratulation you got A grade :\n");
    }
    else if (b < 90 && b >= 80)
    {
        printf("congratulation you got B grade :\n");
    }
    else if (b < 80 && b >= 70)
    {
        printf("congratulation you got C grade :\n");
    }
    else if (b < 70 && b >= 60)
    {
        printf(" you got D grade work hard :\n");
    }
    else if (b < 60 && b >= 50)
    {
        printf(" you got E grade just pass :\n");
    }
    else if (b < 50 && b >= 0)

    {
        printf(" you are fail :\n");
    }
    else
    {
        printf("invalied number :\n");
    }

    printf("Suraj singh ECE B :");

    return 0;
}
