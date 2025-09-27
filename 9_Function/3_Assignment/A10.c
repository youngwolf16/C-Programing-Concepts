/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 24-09-2025
Program Name : Implement your own islower() function

Sample Input :

Enter the character: a

Sample Output:

Entered character is lower case alphabet

*/

#include <stdio.h> // Standard I/O header

int my_islower(ch) // Function to check whether the character is lowercase letter (a–z)
{
    // Check if character is lowercase letter (a–z)
    if(ch >= 97 && ch <= 122)
    {
        return 1; // Return 1 if lowercase letter (a–z)
    }
    return 0; // Return 0 if not lowercase letter (a–z)
}

int main()
{
    char ch; // Variable to store input character
    int ret; // Variable to store result from function

    printf("Enter the character: ");
    scanf("%c", &ch); // Read character input from user

    ret = my_islower(ch); // Call function to check lowercase letter (a–z)

    if(ret) // If character is lowercase letter (a–z)
    {
        printf("Entered character is lower case alphabet\n");
    }
    else // If character is not lowercase letter (a–z)
    {
        printf("Entered character is not lower case alphabet\n");
    }

    return 0; // Program executed successfully
}