#include <stdio.h>

void main()
{
    int a, b, *p, *q, mul;

    // Reads two user inputs integer values for variable a and b.
    printf("\nEnter integer a:");
    scanf("%d", &a);
    printf("\nEnter integer b:");
    scanf("%d", &b);

    // assign address of variable a and b to integer pointers p and q.
    p = &a;
    q = &b;

    // performs multiplication using pointers p and q referring the address of a and b values.
    mul = *p * *q;

    printf("\nMultiplication of the numbers: %d", mul);
}
