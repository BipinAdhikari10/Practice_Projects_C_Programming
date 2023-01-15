#include <stdio.h>

int main()
{
    int a[2], sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &a[0], &a[1]);

    sum = a[0] + a[1];
    printf("Sum of the entered numbers: %d", sum);

    return 0;
}
