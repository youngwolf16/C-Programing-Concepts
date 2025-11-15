#include <stdio.h>

void print(int *ptr,int size)
{
    
    for(int i=0;i<size;i++)
    {
        printf("%d\n",ptr[i]);
    }
    
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    print(arr,5);
}