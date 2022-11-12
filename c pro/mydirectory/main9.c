#include <Stdio.h>
int main()
{
    int a,x,j;
    for(a=0;a<8;a++){
        printf("%d\n",a);
        for(j=0;j<3;j++) {
            printf("yo bros\n");
            scanf("%d",&x);
            if(x==0){
                goto end;
            }
        }

    }
    end:

    return 0;
}
