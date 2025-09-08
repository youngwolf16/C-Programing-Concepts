#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size],even[size],odd[size];
    int odd_num=0,even_num=0;
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
       if(arr[i]%2==0)
       {
           even[even_num] = arr[i];
           even_num++;
       }
       else
       {
           odd[odd_num] = arr[i];
           odd_num++;
       }
    }
    
    printf("Odd array elements: ");
    
    for(int i=0;i<odd_num;i++)
    {
        printf("%d ",odd[i]);
    }
    
    printf("\nEven array elements: ");
     
    for(int i=0;i<even_num;i++)
    {
        printf("%d ",even[i]);
    }
    
    
    
}