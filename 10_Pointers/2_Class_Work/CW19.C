#include <stdio.h>

void sumprod(int num1,int num2,int *sum, int *prod)
{
    *sum = num1 + num2;
    *prod = num1 * num2;
}

int main()
{
    int num1,num2;
    int sum = 0, prod = 0;
    scanf("%d %d",&num1,&num2);
    sumprod(num1,num2,&sum,&prod);
    printf("sum = %d, product = %d",sum,prod);
    return 0;
}