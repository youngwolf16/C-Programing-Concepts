/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 24-09-2025
Program Name : Implement your own isdigit() function

Sample Input :

Enter the character: 3

Sample Output:

Entered character is an hexadecimal digit

*/

#include <stdio.h> // Standard I/O header

int my_isxdigit(ch) // Function to check whether the character is hexadecimal digit

{
    // Check if character is hexadecimal digit
    if(ch >= 48 && ch <= 57 || ch >= 65 && ch <= 70 || ch >= 97 && ch <= 102 )
    {
        return 1; // Return 1 if hexadecimal digit
    }
    return 0; // Return 0 if not hexadecimal digit
}

int main()
{
    char ch; // Variable to store input character
    int ret; // Variable to store result from function

    printf("Enter the character: ");
    scanf("%c", &ch); // Read character input from user

    ret = my_isxdigit(ch); // Call function to check hexadecimal digit

    if(ret) // If character is hexadecimal digit
    {
        printf("Entered character is an hexadecimal digit\n");
    }
    else // If character is not hexadecimal digit
    {
        printf("Entered character is not an hexadecimal digit\n");
    }

    return 0; // Program executed successfully
}