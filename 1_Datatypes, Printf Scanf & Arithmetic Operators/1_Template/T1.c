/*Program to use printf & scanf to print & read basic data types*/

#include <stdio.h> //preprocessor file or header file

char name_letter;  //declaration of character variable
int pincode;       //declaration of integer variable
float height;      //declearation of float variable
double latitude, longitude; //declearation of double variable

int main()
{
    char name_letter;  //declaration of character variable
    int pincode;       //declaration of integer variable
    float height;      //declearation of float variable
    double latitude, longitude; //declearation of double variable
    //printf("Enter first letter of your name: ");
    scanf("%c",&name_letter);   // collecting character input
    //printf("Enter your Pincode: ");
    scanf("%d",&pincode);  // collecting interger input
    //printf("Enter your height in feet: ");
    scanf("%f",&height); // collecting float input
    //printf("Enter latitude & longitude of your address: ");
    scanf("%lf %lf",&latitude,&longitude); // collecting double inputs
    
    printf("Here is what you have entered:\n");
    printf("First Letter in Name: %c\n",name_letter); //printing character output
    printf("Pincode: %d\n",pincode); //printing integer output
    printf("Height: %f\n",height); //printing float output
    printf("Location: %lf %lf\n",latitude, longitude); //printing double outputs
     
    return 0;
}
