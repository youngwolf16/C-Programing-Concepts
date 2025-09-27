#include <stdio.h>

int product(int num1, int num2)
{
    int result = 0;
    for(int i=0;i<num1;i++)
    {
        result = result + num2;
    }
    
    return result;
}

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("Product of two numbers is %d",product(num1,num2));
}