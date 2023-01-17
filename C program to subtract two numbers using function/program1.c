#include <stdio.h>
int subtract(int a, int b)
{
    return a - b;
}
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    result = subtract(num1, num2);
    printf("Subtraction of two number is %d\n", result);
    return 0;
}