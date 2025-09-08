#include <stdio.h> //preprocessor file

int main()
{
    float celsius,fahrenheit; //declaring float variable
    scanf("%f",&fahrenheit); //getting user input
    celsius = ((fahrenheit-32)*0.5555); //caculating celsius
    printf("%f",celsius); //printing output
    return 0; //successfully executed
}