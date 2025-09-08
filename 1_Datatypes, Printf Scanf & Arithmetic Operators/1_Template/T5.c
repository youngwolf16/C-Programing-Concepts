#include <stdio.h> //preprocessor file

int main()
{   
    int fahrenheit; //declaration of integer variable
    double celsius; //declaration of float variable
    scanf("%d",&fahrenheit); //collecting the input
    celsius = ((fahrenheit-32)*0.5555); //calculating celsius
    printf("%.6lf",celsius); //printing the output
    
    return 0; //successfully executed
}