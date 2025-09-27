#include <stdio.h>

int oddeven(int num);

int main()
{
    

    int num;
    scanf("%d",&num);
    if(oddeven(num))
    printf("%d is even\n",num);
    else
    printf("%d is odd\n",num);

    
}

int oddeven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    return 0;
}