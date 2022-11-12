#include <stdio.h>
int main()
{
    int marks[100];
    int x,b,sum=0;
    printf("enter how many number you want to add:\n");
    scanf("%d",&b);
    for(x=0;x<b;x++){
        printf("enter the number : %d=",x);
        scanf("%d",&marks[x]);

        
    } for(x=0,x<b,x++) {sum +=marks[x];}
        printf("the sum of all number is %d",sum);

    return 0;
}
