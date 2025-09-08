#include <stdio.h>

int large(int n, int m)
{
    return (n>m)?n:m; //comparing using teranry operator short hand if
}

int main()
{
    int n,m;
    printf("Enter two numbers : ");
    scanf("%d %d",&n,&m);
    printf("\nLargest is %d",large(n,m));
    
    return 0;
}