#include<stdio.h>
int main()
{
    int P,T,R,I;
    printf("Enter the principal\n");
    scanf("%d",&P);
    printf("Enter the time\n");
    scanf("%d",&T);
    printf("Enter the rate\n");
    scanf("%d",&R);
    I=P*T*R/100;
    printf("The simple interest is %d\n",I);
    return 0;
}