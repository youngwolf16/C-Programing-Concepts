#include <stdio.h>

int main()
{
    int size1,size2;
    scanf("%d",&size1);
    scanf("%d",&size2);
    int count = 0;
    
    int arr1[size1],arr2[size2];
    
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr2[i]==arr1[j]){
                count++;
                break;
            }
        }
    }
    
    //printf("%d",count);
    
    if(count == size1)
    {
        printf("Array elements are equal.");
    }
    else{
        printf("Array elements are not equal.");
    }
    
}