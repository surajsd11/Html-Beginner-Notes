#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int comp(int c)
{
    srand(time(NULL));
    return rand() % c;
}
int su(char z, char x)
{
    if (z == x)
    {
        return -1;
    }
    else if ((z == 'r') && (x == 's'))
    {
        return 1;
    }
    else if ((x == 'r') && (z == 's'))
    {
        return 0;
    }
    else if ((z == 'p') && (x == 'r'))
    {
        return 1;
    }
    else if ((x == 'p') && (z == 'r'))
    {
        return 0;
    }
    else if ((z == 'p') && (x == 's'))
    {
        return 1;
    }
    else if ((x == 'p') && (z == 's'))
    {
        return 0;
    }
}
int main()
{
    char n, player, computer;
    int a = 0, b = 0,temp,pem;
    char d[] = {'r', 'p', 's'};
    printf("welcome to rock paper scissor\n");
    printf("lets start game :\n");
    printf("enter your name : ");
    scanf("%s", &n);
    for (int i = 1; i <= 3; i++)
    {

        printf("choose rock paper or sisor write 1 for rock write 2 for paper write 3 for scissor \n");
        printf("player chance : \n");
        scanf("%d", &temp);
        getchar();
        player = d[temp - 1];
        printf("player choise : %c\n", player);

            printf("computer turn :\n");
        pem= comp(3)+1;
        computer = d[pem - 1];
        printf("computer choise : %c\n", computer);
        if (su(player, computer) == 1)
        {   a +=1;
            printf("you got one point:\n");
        }
        else if (su(player, computer) == -1)
        {
            printf("no one get point:\n");
        }
        else
        {   b+=1;
            printf("computer got one point:\n");
        }printf("you got =%d\ncomputer got=%d\n",a,b);
    }
    if (a > b){
        printf("player wins:\n");
    }else if(a < b){
        printf("computer wins:\n");
    }else {
        printf("no one wins:\n");
    }
}