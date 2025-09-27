#include <stdio.h>

int is_prime(int);

void generate_prime(int);

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}

void generate_prime(int limit)
{
    if(limit==2)
        {
            printf("%d",limit);
        }
        
    else{
    for(int i=2;i<limit;i++)
    {
        
        
         int flag = 0;   
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
               flag = 1;
            }
        }
        
        
        
        if(flag == 0)
        {
            printf("%d ",i);
        }
        
    }
    }
}
