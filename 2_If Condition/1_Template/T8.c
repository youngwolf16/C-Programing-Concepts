//check number is +ve or -ve using if else condition

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n>=0)
    {
        printf("%d is positive",n);
    }
    else
    {
        printf("%d is negative",n);
    }
    
}