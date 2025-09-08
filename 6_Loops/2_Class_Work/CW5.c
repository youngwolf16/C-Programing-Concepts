#include <stdio.h>
#include <math.h>

int main()
{
    int base, expo, powr=1;
    printf("Enter the base value : ");
    scanf("%d",&base);
    printf("Enter the exponential value : ");
    scanf("%d",&expo);
    
    for(int i=0;i<expo+1;i++)
    {
        
        powr = pow(base,i);
        printf("%d ",powr);
    }
    
}
