#include <stdio.h>

int main()
{
    int size,largest =0;
    scanf("%d",&size);
    int arr1[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    largest = arr1[0];
    
    for(int i=0;i<size;i++)
    {
        
       if(arr1[i]>largest)
       {
           largest = arr1[i];
       }
    }
    
    printf("Largest element is : %d",largest);
    
    
    
}