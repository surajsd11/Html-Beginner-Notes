#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }

    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }

    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 's'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("welcome to the game:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player 1 turn\n");
        printf("chhose 1for rock, 2 for paper, 3for scissor\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("you choose :%c\n", playerchar);
        printf("computer  turn\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("you choose :%c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("cpu got it\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("its a draw\n");
        }
        else
        {
            playerscore += 1;
            printf("you got it\n");
        }
        printf("you: %d\n,cpu: %d\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("you win the game:\n");
    }
    else if (playerscore < compscore)
    {
        printf("cpu win the game:\n");
    }
    else
    {
        printf("its a draw\n ");
    }

    return 0;
}
