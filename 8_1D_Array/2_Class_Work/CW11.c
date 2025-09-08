#include <stdio.h>

int main()
{
    int size,temp=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements before reversing:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<size/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    
    printf("\nElements after reversing:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}