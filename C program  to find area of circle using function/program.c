#include <stdio.h>
#define PI 3.14159

float area_of_circle(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = area_of_circle(radius);
    printf("Area of the circle is: %f", area);
    return 0;
}
