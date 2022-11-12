#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, i, z, y,;

    do
    {
        printf("enter the value you want to change you want to convert km to miles write 1 if you want inches to miles write 2 :");
        scanf("%d", &y);
        printf("enter the number:");
        scanf("%d", &x);

        if (y == 1)
        {
            z = x * 0.62137;
            printf("km to miles=%d\n", z);
        }
        else if (y == 2)
        {
            z = x / 12;
            printf("inches to foot =%d\n", z);
        }
        else
        {
            printf("you have enter the wrong conversing number \n:");
        }
        printf("if you want to stop programe write 0 if you dont write 1:\n");
        scanf("%d", &i);
    } while (i != 0);
    return 0;
}
