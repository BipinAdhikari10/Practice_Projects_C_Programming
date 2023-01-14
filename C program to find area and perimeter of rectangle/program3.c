#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of rectangle is %f\n", area);
    printf("Perimeter of rectangle is %f\n", perimeter);
    return 0;
}