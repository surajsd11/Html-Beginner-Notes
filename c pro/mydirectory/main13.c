#include <stdio.h>
int main()
{
    int i,x=1,fact=1;
    printf("enter the number:\n");
    scanf("%d",&i);
    while(x<=i){
        fact=fact*x;
        x++; }
        printf("Factorial of  %d= %d\n", i,fact);
     

        

        
    


    return 0;
}
