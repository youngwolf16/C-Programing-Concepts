#include <stdio.h>

void average(int sum, float *avg, int size)
{
    
    *avg = sum / (float) size;
    
    printf("Average is %g",*avg);
    
    
}

int main()
{
    int size, sum = 0;
    
    scanf("%d",&size);
    
    int arr[size];
    
    float avg = 0;
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    
    average(sum, &avg, size);
    
    return 0;
}