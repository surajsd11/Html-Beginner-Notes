#include <stdio.h>
int main()
{
  
  int x;
  printf("if you  pass in science and math then write 1\n");
  printf("if you pass in maths then write 2\n ");
  printf("if you pass in science then write 3\n ");
  scanf("%d",&x);
  if(x=1){
      printf("you have won 45 rupees\n");}
  else if(x=2){
        printf("you have won 15 rupees\n");}
  else if(x=3){ 
           printf("you have won 15 rupees\n");}
 else{
     printf("you will not get anything"); }
              
        return 0; 
  }
