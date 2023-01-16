#include <stdio.h>
int area_rectangle(int length, int width)
{
    return length * width;
}
int perimeter_rectangle(int length, int width)
{
    return 2 * (length + width);
}
int main()
{
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    int area = area_rectangle(length, width);
    int perimeter = perimeter_rectangle(length, width);
    printf("Area of the rectangle is %d\n", area);
    printf("Perimeter of rectangle is %d\n", perimeter);
    return 0;
}