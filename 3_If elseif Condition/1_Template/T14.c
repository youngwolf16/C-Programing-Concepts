//print grade for given score using if elseif

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the score: ");
    scanf("%d",&num);
    
    if(num>=90 && num<=100){
     
        printf("Your grade is A");
    
    }
    else if(num>=80 && num<=89)
    {
        printf("Your grade is B");
    }
    else if(num>=70 && num<=79)
    {
        printf("Your grade is C");
    }
    else if(num>=60 && num<=69)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }
    
    return 0;
}