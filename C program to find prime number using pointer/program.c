#include <stdio.h>

// Function to check if a number is prime or not
int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i, flag = 0;
    int *ptr;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    ptr = &n;

    // Check if the number is prime
    flag = isPrime(*ptr);

    if (flag == 1)
    {
        printf("%d is a prime number.", *ptr);
    }
    else
    {
        printf("%d is not a prime number.", *ptr);
    }

    return 0;
}
