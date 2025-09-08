//revrse a number using while loop

#include <stdio.h>

int main()
{
    int num,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    
    if(rev==0)
    {
        printf("Reversed number is 0");
    }
    else if(rev>0)
    {
        printf("Reversed number is %d",rev);
    }
    else
    {
        printf("Please enter a positive integer");
    }
    
    return 0;
}