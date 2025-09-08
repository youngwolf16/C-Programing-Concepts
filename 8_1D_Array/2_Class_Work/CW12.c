#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size],uniq[size];
    int unique = 0;
    
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        int found = 0;
        for(int j=0;j<unique;j++)
        {
            if(arr[i]==uniq[j])
            {
                found = 1;
                break;
            }
        }
        if(!found){
            uniq[unique] = arr[i];
            unique++;
        }
    }
    
    printf("Unique array elements: ");
    
    for(int i=0;i<unique;i++)
    {
        printf("%d ",uniq[i]);
    }
    
}