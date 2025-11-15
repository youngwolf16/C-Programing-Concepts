#include <stdio.h>

int power(int n,int m)
{
    if(m==0)
        return 1;
    
    return n * power(n,m-1);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    printf("%d to the power of %d is %d",n,m,power(n,m));
    
}