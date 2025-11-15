#include <stdio.h>

void print(int *arr, int size)
{
    int i = 0;
    
    if(size > 0){
        printf("%d\n",*arr);
        printf("\n");
        print(arr+1,size -1);
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    
    printf("Array's elements are\n");
    
    int *ptr = arr;
    
    //print(arr,5);
    
    for(int i=1;i<=5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    
}