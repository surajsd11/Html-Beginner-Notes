#include<stdio.h>
int main()
{
   int n;

   printf("Enter number of rows: ");
   scanf("%d", &n);

   for(int i = 1; i <= n; i++)
   {
      for(int j = 1; j <= n; j++)
      {
         if(j <= n-i) printf(" ");
         else printf("* ");
         // print 1 star & 1 space.
      }
      printf("\n");
   }

   return 0;
}