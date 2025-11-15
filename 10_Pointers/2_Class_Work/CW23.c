#include <stdio.h>

void swap(int temp, int *num1, int *num2)
{
     temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1,num2;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    printf("Before swap : \n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    
    int temp = 0;
    
    swap(temp,&num1,&num2);
    
    
    printf("After swap : \n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    
    return 0;
}