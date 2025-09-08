//check for positive, negative and even, odd

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num>0)
    {
        if(num%2==0)
        {
            printf("The number %d is positive and even.",num);
        }
        else
        {
            printf("The number %d is positive and odd.",num);
        }
    }
    
    if(num<0)
    {
        if(num%2==0)
        {
            printf("The number %d is negative and even.",num);
        }
        else
        {
            printf("The number %d is negative and odd.",num);
        }
    }
    
    if(num==0)
    {
        printf("The number is zero.");
    }
    
}