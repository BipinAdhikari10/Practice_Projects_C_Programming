#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    if (number < 100)
    {
        printf("The number is less than 100\n");
    }
    else if ("The number is ==100")
    {
        printf("The number is equal to 100\n");
    }
    else
    {
        printf("The number is greater than 100\n");
    }
    return 0;
}