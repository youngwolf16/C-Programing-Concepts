#include <stdio.h>

int main()
{
    int size,flag = 0;
    scanf("%d",&size);
    int arr[size], search;
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&search);
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] == search)
        {
            flag = 1;
            break;
        }
    
    }
    
    if(flag == 1 ){
        printf("Element Found");
    }
    else{
        printf("Not Found");
    }
        
}