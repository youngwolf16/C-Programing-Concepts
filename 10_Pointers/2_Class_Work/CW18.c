#include <stdio.h>


void print(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}

void square(int *ptr,int size)
{
   
    for(int i=0;i<size;i++)
    {
        *ptr = *ptr * *ptr;
        ptr++;
    }
    
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before squaring : ");
    print(arr,size);
    square(arr,size);
    printf("\nArray elements before squaring : ");
    print(arr,size);
    
}