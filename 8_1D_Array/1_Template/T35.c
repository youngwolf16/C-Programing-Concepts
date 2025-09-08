#include <stdio.h>

int main()
{
    int size,sum = 0;
    float avg = 0;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter the array elements: \n");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    
    avg = sum / (float)size;
    
    printf("Sum: %d\n",sum);
    printf("Average: %f\n",avg);
    
}