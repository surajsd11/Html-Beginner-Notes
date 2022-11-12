#include <stdio.h>

int main()
{
    int x;
    printf("enter the any number:\n");
    scanf("%d",&x);
    printf("the number you have entered  %d \n",x );
    switch(x){
        case 45:
        printf("you have eneterd the lucky number 45 so you will get 80000 prize money\n");
        break;
        case 89:
        printf("you have entered the lucky number 89 so you will get 50000 prize money\n");
        break;
        default:
        printf("better lucky next time!");

        
    }

    
    return 0;
}
