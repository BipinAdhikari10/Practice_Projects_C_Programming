#include <stdio.h>

void reverse(int *num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(&num);
    printf("Reversed number: %d\n", num);

    return 0;
}

void reverse(int *num)
{
    int reversed = 0;
    while (*num != 0)
    {
        reversed = reversed * 10 + *num % 10;
        *num /= 10;
    }
    *num = reversed;
}
