#include <stdio.h>

int main()
{
    int size;
    int even = 0, odd =0;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even= even+1;
        }
        else
        {
            odd = odd+1;
        }
    }
    
    printf("Even count: %d\n",even);
    printf("Odd count: %d\n",odd);
    
}