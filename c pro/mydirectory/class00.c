#include <stdio.h>
int main()
{float rs,tp;
	
	printf("Enter Total Paisa : ");
	scanf("%f",&tp);
	rs = tp / 100;
	
	printf("\nTotal Paisa = %d",tp);
	printf("\nConverted Paisa in Rs = %f",rs);

	return 0;
}