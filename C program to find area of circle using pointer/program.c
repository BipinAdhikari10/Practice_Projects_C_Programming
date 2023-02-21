/*##Simple Example Program for Area Of Circle Using Pointer In C*/
/*##Simple Area Of Circle Program,pointers Example C Programming*/
/*##Pass By Reference Function Example Program In C Programming*/

// Declare Area of Circle Function Using Pointer
void area_of_circle(float *value, float *result)
{
    *result = 3.14 * (*value) * (*value);
}

#include <stdio.h>

int main()
{
    float radius, area;

    printf("\nEnter the radius of Circle : ");
    scanf("%f", &radius);

    // area = 3.14 * radius * radius;
    area_of_circle(&radius, &area);

    printf("\nArea of Circle : %f", area);

    return (0);
}