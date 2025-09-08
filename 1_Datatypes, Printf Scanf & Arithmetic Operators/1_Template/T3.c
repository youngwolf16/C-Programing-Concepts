#include <stdio.h> //preprocessor file

int main()
{
    float p,q,r,out; //declaration of float variable
    scanf("%f %f %f",&p,&q,&r); //collecting the input from the user
    out = (p+q+r)/3; //calculating average 
    printf("%f",out); //printing the average
        
    return 0; //successfully executed
}