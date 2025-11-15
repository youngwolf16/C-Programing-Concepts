#include <stdio.h>

float incr(float *age)
{
    *age = *age + 20;
    
    return *age;
}

int main()
{
    float age;
    scanf("%f",&age);
    printf("Age after increasing by 20 is %g", incr(&age));
    
    return 0;
}