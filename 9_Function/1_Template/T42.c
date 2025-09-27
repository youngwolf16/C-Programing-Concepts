#include <stdio.h>

float average(int n1,int n2,int n3)
{
    float result = (n1+n2+n3)/3.0;
    
    return result;
}


int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Average is %g",average(n1,n2,n3));
}