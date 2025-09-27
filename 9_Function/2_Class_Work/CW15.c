#include <stdio.h>

int square(int num)
{
    int res = num * num;
    
    return res;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("Square is %d",square(num));
    return 0;
}