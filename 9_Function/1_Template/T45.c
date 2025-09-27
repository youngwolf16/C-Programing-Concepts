#include <stdio.h>

int modify(int num)
{
    num = num + 5;
    return num;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("After modifying, num is %d",modify(num));
}