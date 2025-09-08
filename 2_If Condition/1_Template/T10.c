//find the number b/w 50 to 100 range usinf ifelse

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n>=50 && n<=100)
    {
        printf("%d is in range",n);
    }
    else
    {
        printf("%d is not in range",n);
    }
    
    return 0;
}