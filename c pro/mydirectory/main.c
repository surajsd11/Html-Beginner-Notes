#include <stdio.h>

  int main()
  {
     int length, width, area, perimeter;

    printf("Enter the length of the rectangle :");
    scanf("%d", &length);
    printf("Enter the width of the rectangle :");
    scanf("%d", &width); 
    area=length*width;
    perimeter=(2*length)+(2*width);
    printf("area of rectangle =%d\n",area);
    printf("perimeter of rectangle =%d",perimeter);

      

   return 0;
  }
  