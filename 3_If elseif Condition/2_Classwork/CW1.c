//check upper, lower case or digit

#include <stdio.h>

int main()
{
    char c; //intializing char
    printf("Enter the character : ");
    scanf("%c",&c); //get input from the user
    
    if(c>=65 && c<=90) //condition for checking Upper case
    {
        printf("The character is Upper Case.");
    }
    else if(c>=97 && c<=122) //condition for checking Lower case
    {
        printf("The character is Lower Case.");
    }
    else if(c>='0' && c<='9') //condition for checking digit
    {
        printf("The character is Digit.");
    }
    else //if no condition matches then
    {
        printf("The character not an alphabet or digit.");    
    }
    
    return 0; //successfuly executed
}