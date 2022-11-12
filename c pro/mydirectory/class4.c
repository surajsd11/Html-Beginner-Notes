

#include <stdio.h>

int main()
{

    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = (2 * length) + (2 * breadth);

    printf("Area of the rectangle: %f\n", area);
    printf("Perimeter of rectangle: %f\n", perimeter);
    printf("suraj singh ECE B");

    return 0;
}
