#include <stdio.h>
#include <conio.h>
int main()
{  int n; 
   printf("enter how many row you want to print :");
   scanf("%d",&n);
    for (int i = 1; i <= n;i++)
    {   for (int k=1;k<=(n-i);k++){
        printf(" ");}
    
        for (int j = 1; j <=(2*i-1); j++)
        {  
           
            printf("*");
        }
        printf("\n");
    }
    printf("Suraj Singh ECE B:");
        getch();
    return 0;
}
