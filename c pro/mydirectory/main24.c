#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,x,i,y;
    printf("enter how many star you want\n");
    scanf("%d",&a);
    printf("if you want triangle star pattern write 0 if you want triangle reverse pattern write 1\n ");
    scanf("%d",&i);
  if (i==0){for (x=1;x<=a;x++){
       for( y=1;y<=x;y++){
           printf("*");

       } printf("\n");


    }}
    if (i==1){
        for (x=1;x<=a;x++){
            for(y=1;y<=(a-x+1);y++){
                printf("*");
            }printf("\n");       }
    }


    return 0;
}
