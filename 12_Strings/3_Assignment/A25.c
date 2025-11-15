/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 08-10-2025
Program Name : To reverse the given string using iterative method

Sample Input : 

Enter a string : Hello World

Sample Output:

Reverse string is : dlroW olleH

*/

#include <stdio.h>
//#include <string.h>

// Function to reverse a string using a for loop
void reverse_iterative(char str[], int length);

int main()
{
    char str[30];  // Declare a character array to hold the input string

    // user to enter a string
    //printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces until newline
    
    int length = 0;
    
    while(str[length]!='\0')
    {
        length ++;
    }

    // Call the function to reverse the string
    reverse_iterative(str,length);

    // Print the reversed string
    printf("Reversed string is %s\n", str);

    return 0;
}

void reverse_iterative(char str[], int length)
{
    int len = length;  // Get the length of the string
    char temp;

    // Use a single for loop to swap characters
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];                     
        str[i] = str[len - i - 1];         
        str[len - i - 1] = temp;           
    }
}