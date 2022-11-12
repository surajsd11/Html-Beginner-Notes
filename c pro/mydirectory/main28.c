#include <stdio.h>
int fun(char str[]){
    int i=0;
    while(str[i]!=0){
        printf("%c",str[i]);
        i++;
    }printf("\n");
 
   
}
int main()
{
    //char str[34]={'s','u','r','a','j','\0'};
    
   // printf("the chartares is =%s\n",str);
   char str[35];
   gets(str);
   puts(str);
    fun(str);
    printf("the chartares is =%s\n",str);

    return 0;
}
