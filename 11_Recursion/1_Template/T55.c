#include <stdio.h>

int sum(int num)
{
    
    if(num==0)
    {
        return 0;
    }
    
    return num +sum(num-1);
    
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("Sum of 1st %d numbers is %d",num,sum(num));
}