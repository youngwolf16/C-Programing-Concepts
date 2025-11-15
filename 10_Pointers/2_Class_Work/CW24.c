#include <stdio.h>

void supro(int num1,int num2, int *sum,int *product)
{
    *sum = num1 + num2;
    *product = num1 * num2;
}

int main()
{
    int num1,num2;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    int sum = 0, product = 0;
    
    supro(num1,num2,&sum,&product);
    
    printf("Sum is %d\n",sum);
    printf("Product is %d\n",product);
    
    return 0;
}