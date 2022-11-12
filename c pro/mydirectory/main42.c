#include <stdio.h>
int fun(int num)
{
    int  reverse = 0;
    int number=num;
    

    while (num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num % 10;
        num= num/ 10;
    } printf(" reverse of number %d\n", reverse);
   

    if (number == reverse)
    {
        return 1;
    }
    else if (num!=reverse)
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("enter the palindrome number : ");
    scanf("%d", &a);
  

    if (fun(a))
    {
        printf("it is a palindrome number ****************");
    }
    else 
    {
        printf("it is not a paindrome number **************");
    }
    return 0;
}
