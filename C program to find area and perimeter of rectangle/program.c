
#include <stdio.h>
#include <conio.h>

int main()
{
    /* Declaring variables */
    float length, breadth, area, perimeter;

    /* Reading length and breadth from user */
    printf("Enter length of the rectangle = ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle = ");
    scanf("%f", &breadth);

    /* Calculating area and perimeter */
    area = length * breadth;
    perimeter = 2 * (length * breadth);

    /* Displaying result */
    printf("Area of rectangle = %f", area);
    printf("\nPerimeter of rectangle = %f", perimeter);

    return 0;
}