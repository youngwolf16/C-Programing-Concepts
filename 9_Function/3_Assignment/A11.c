/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 24-09-2025
Program Name : Implement your own ispunct() function

Sample Input :

Enter the character: $

Sample Output:

Entered character is punctuation character

*/

#include <stdio.h> // Standard I/O header

int my_ispunct(ch) // Function to check whether the character is punctuation character
{
    // Check if character is punctuation character
    if(ch >= 33 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126 )
    {
        return 1; // Return 1 if punctuation character
    }
    return 0; // Return 0 if not punctuation character
}

int main()
{
    char ch; // Variable to store input character
    int ret; // Variable to store result from function

    printf("Enter the character: ");
    scanf("%c", &ch); // Read character input from user

    ret = my_ispunct(ch); // Call function to check punctuation character

    if(ret) // If character is punctuation character
    {
        printf("Entered character is punctuation character\n");
    }
    else // If character is not punctuation character
    {
        printf("Entered character is not punctuation character\n");
    }

    return 0; // Program executed successfully
}