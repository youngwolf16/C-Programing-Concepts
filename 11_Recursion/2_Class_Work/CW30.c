#include <stdio.h>

void print(int num,int sum)
{

    if(sum<=num)
    {
        printf("%d ",sum);
        print(num,sum+1);
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    print(num,0);
}