#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, sum, sub, multi, divi;
    char c;
     printf("what do you want to calculate + , - , * , /:\n");
    scanf("%c", &c);
    printf("enter the first number :");
    scanf("%f", &a);
    printf("enter the second number :");
    scanf("%f", &b);
    
    sum = a + b;
    sub = a - b;
    multi = a * b;
    divi = a / b;
   
    switch (c)
    {
    case '+':
        printf("the sum of two number is :%f\n", sum);
        break;
    case '-':
        printf("the subtraction of two number is :%f\n", sub);
        break;
    case '*':
        printf("the multiplication of two number is :%f\n", multi);
        break;
    case '/':
        printf("the division of two number is :%f\n", divi);
        break;
    default:
        printf("invalid:\n");
    }
    printf("suraj singh ECE B :");
    getch();

    return 0;
}
