#include <stdio.h>
int main()
{
    int x,num;
    do{
        printf("enter the number;\n");
        scanf("%d",&x);
        num+=x;

    }while(x!=0);
    printf("the number %d\n",num);

    return 0;
}
