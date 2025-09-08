//sum of the interest
#include <stdio.h> //preprocessor file
#include <math.h> //for using some math functions

int main()
{
    float p,y; //declaring float 
    float r,out; //declaring float
    int out1; //declaring integer
    scanf("%f %f %f",&p,&r,&y); //accepting inpt from the user
    out = (p*r*y)/100; //calculating sim of interest
    out1 = (int)out; //conversion of float to int
    if(out==floor(out)) //checking the output is in integer
    {
        printf("%d",out1); //printing the integer value
    }
    else{
    printf("%.2f",out); //printing float value with 2 decemial precession
    }
    return 0; //successfully executed
}