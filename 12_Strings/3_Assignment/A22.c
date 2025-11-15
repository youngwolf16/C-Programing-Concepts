/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 05-10-2025
Program Name : implement getword function

Sample Input : 
Enter the string : Welcome to Emertxe

Sample Output:
You entered Welcome and the length is 7
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Function to get the first word and return its length
int get_word(char *str)
{
    int count = 0;

    // Count characters until space or end of string
    while (str[count] != '\0' && str[count] != ' ')
    {
        count++;
    }

    str[count] = '\0'; // Terminate the string after the first word

    return count; // Return length of the first word
}

// Main function where the logic is executed
int main()
{
    char str[50]; // Declare input buffer

    printf("Enter the string : ");
    scanf("%[^\n]", str); // Read full line including spaces

    int length = get_word(str); // Extract first word and get its length

    // Display result
    printf("You entered %s and the length is %d\n", str, length);

    return 0; // Program executed successfully
}