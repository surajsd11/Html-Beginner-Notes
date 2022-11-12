#include <stdio.h>
#include <string.h>
struct cab
{
    char name[30];
    char drivinglicenseno[35];
    char Route[30];
    int Kms;
};
int main()
{
    int n, x, y;
    printf("enter how many drivers are there :");
    scanf("%d", &y);

    for (int i = 0; i <= y; i++)
    {
        printf("\nenter the driver number :");
        scanf("%d", &n);

        struct cab b;
        b.name;
        printf("enter your name :\n");
        scanf("%s", &b.name);
        printf("\n%d driver name is  %s\n", n, b.name);
        b.drivinglicenseno;
        printf("enter your driving lencese number:\n");
        scanf("%s", &b.drivinglicenseno);
        printf("%s driving licens number is  %s\n", b.name, b.drivinglicenseno);
        b.Route;
        printf("enter you route:\n");
        scanf("%s", &b.Route);
        
        printf("route taken by %s=  %s\n", b.name, b.Route);
        b.Kms;
        printf("enter your kms:\n");
        scanf("%d", &b.Kms);

        printf("total distance  cover by %s car=  %d\n", b.name, b.Route);

        printf("to exsit type 0 otherwise  type 1: ");

        scanf("%d", &x);
        if (x==0)
    {
        break;
    }

    }
    


    return 0;
}
