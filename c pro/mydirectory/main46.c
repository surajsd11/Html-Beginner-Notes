#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  FILE *ptr = NULL;
  char string[45];
    ptr=fopen("myfile.txt","a+");
    string[1]="suraj";
    fscanf(ptr,"%s",string);
    printf("the thought %s\n",string[1]);



    return 0;
}
