/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 22-09-2025
Program Name : Implement your own isalnum() function

Sample Input :

Enter the character: a

Sample Output:

The character 'a' is an alnum character.

*/

#include <stdio.h> // Standard I/O header

int my_isalnum(ch) // Function to check whether the character is alphanumeric
{
    // Check if character is a digit (0–9), uppercase letter (A–Z), or lowercase letter (a–z)
    if(ch >= 48 && ch <= 57 || ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        return 1; // Return 1 if alphanumeric
    }
    return 0; // Return 0 if not alphanumeric
}

int main()
{
    char ch; // Variable to store input character
    int ret; // Variable to store result from function

    printf("Enter the character: \n");
    scanf("%c", &ch); // Read character input from user

    ret = my_isalnum(ch); // Call function to check alphanumeric status

    if(ret) // If character is alphanumeric
    {
        printf("Entered character is alphanumeric character\n");
    }
    else // If character is not alphanumeric
    {
        printf("Entered character is not alphanumeric character\n", ch);
    }

    return 0; // Program executed successfully
}