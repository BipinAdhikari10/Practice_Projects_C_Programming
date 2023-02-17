#include <stdio.h>

int factorial(int *num)
{
    int fact = 1;
    int i;
    for (i = 1; i <= *num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int *num = &n;
    int fact = factorial(num);
    printf("Factorial of %d is %d\n", *num, fact);
    return 0;
}
