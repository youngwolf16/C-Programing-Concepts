//largest of the 3 interger using if else if 

#include <stdio.h>

int main()
{
    int num1,num2, num3, result=0;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(num1>num2 && num1>num3)
    {
        result = num1;
    }
    else if(num2>num1&&num2>num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    
    printf("Largest is %d",result);
    
    return 0;
}