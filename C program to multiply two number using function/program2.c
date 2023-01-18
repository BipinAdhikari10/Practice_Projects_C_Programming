#include <stdio.h>
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int num1, num2, result;
    printf("Enter the numbers: ");
    scanf("%d%d", &num1, &num2);
    result = multiply(num1, num2);
    printf("%d is result\n", result);
    return 0;
}