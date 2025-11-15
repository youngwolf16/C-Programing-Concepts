#include <stdio.h>

int sum(int num,int total)
{
    
    
   if (num==0)
    {
        return total;
    }
    
    return sum(num/10, total + (num%10));
    
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("Sum of the digits is %d",sum(num,0));
    return 0;
}