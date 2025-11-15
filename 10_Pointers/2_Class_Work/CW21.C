#include <stdio.h>

float average(int *ptr,int size,float *avg)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    
    return *avg = sum / (float) size;
}


int main()
{
    
    int size;
    scanf("%d",&size);
    
    int arr[size];
    float avg = 0;
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Average of array elements : %g",average(arr,size,&avg));
    
    return 0;
}