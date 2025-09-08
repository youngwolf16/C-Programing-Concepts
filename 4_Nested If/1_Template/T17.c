//largest among three number using nestedif

#include <stdio.h>

int main()
{
    int num1=0,num2=0,result=0;
    int num3=0;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    
    if(num1>num2){
        if(num1>num3){
            result = num1;
        }
    }
    else if(num2>num1){
        if(num2>num3){
            result = num2;
        }
        else
        {
            result = num3;
        }
    }

    
    printf("Largest is %d",result);
    
    
}