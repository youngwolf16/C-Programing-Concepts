#include <stdio.h>

void fibo(int a, int b, int num)
{
    //int a = 0, b = 1, c=0;
    
    if(a<=num){
        printf("%d, ",a);
        fibo(b,a+b,num);
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("Fibonacci series are : ");
    fibo(0,1,num);
}
