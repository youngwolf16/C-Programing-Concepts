#include <stdio.h>
void square(int arr[], int size);

int main()
{
    int size;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    square(arr, size);
    
}

void square(int *ptr,int size)
{
    printf("Square is ");
    for(int i=0;i<size;i++)
    {
        printf("%d ", *ptr * *ptr);
        ptr++;
    }
}