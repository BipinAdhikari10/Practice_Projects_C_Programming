#include <stdio.h>

int main()
{
    int length, width;
    int *pLength = &length;
    int *pWidth = &width;
    int area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", pLength);

    printf("Enter the width of the rectangle: ");
    scanf("%d", pWidth);

    area = (*pLength) * (*pWidth);
    printf("The area of the rectangle is %d", area);

    return 0;
}
