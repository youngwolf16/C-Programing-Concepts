#include <stdio.h>

int oddeven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    if(oddeven(num))
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
}