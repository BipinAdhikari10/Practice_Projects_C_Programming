#include <stdio.h>
int areaofRect(int Length, int breadth)
{
    int area;
    area = Length * breadth;
    return area;
}
int main()
{
    int l = 10, b = 2;
    int area = areaofRect(l, b);
    printf("%d\n", area);
}