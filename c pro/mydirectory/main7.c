#include <stdio.h>
int main()
{
    int x,count,sum =0;
    printf("enter any natural number:");
    scanf("%d",&x);
    for(count=0;count <=x;++count){
        sum += count;

    }printf("sum=%d",sum);
    return 0;
}
