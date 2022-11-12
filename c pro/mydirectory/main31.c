#include <stdio.h>
int fun(int array[]){
    int x,y,z;
    x=array[0];
    y=array[1];
    z=array[2];
   
    
    array[0]=array[6];
    array[1]=array[5];
    array[2]=array[4];
    array[4]=z;
    array[5]=y;
    array[6]=x;
    for(int i=0;i<=6;i++){
        printf("% 4d",array[i]);
    }


   
}
int main()
{
    int arr[100]={1,2,3,4,5,6,67};
   fun(arr);

    return 0;
}
