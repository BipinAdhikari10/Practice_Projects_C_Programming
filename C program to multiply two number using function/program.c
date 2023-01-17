#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2, result;
    printf("Enter two numbers to multiply: ");
    scanf("%d%d", &num1, &num2);
    result = multiply(num1, num2);
    printf("Result: %d", result);
    return 0;
}
