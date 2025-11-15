#include <stdio.h>

int fact(int num)
{
    int res = 1;
    if(num==1)
    {
       return 1;
    }
    
    return num * fact(num-1);
}

int main()
{
    
    int num;
    scanf("%d",&num);
    
    
    /*for(int i=num;i>=1;i--)
    {
        sum = sum * i;
    }*/
    
    printf("Factorial of %d is %d",num,fact(num));
}