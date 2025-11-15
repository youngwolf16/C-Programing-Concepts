/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 06-10-2025
Program Name : To replace each string of one or more blanks by a single blank

Sample Input : 

Enter the string with more spaces in between two words

Pointers     are               sharp     knives.

Sample Output:

Pointers are sharp knives.

*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Function to remove consecutive blanks and replace them with a single blank
void remove_blank(char *str)
{
    int i = 0, j = 0;

    // Traverse the string until null terminator is reached
    while (str[i] != '\0')
    {
        // Replace tab characters with space for uniformity
        if (str[i] == '\t')
        {
            str[i] = ' ';
        }

        // If current and next characters are both spaces, shift the string left
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            j = i;
            // Shift characters one position left to remove extra space
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            // Do not increment i here to check for more consecutive spaces
        }
        else
        {
            i++; // Move to next character
        }
    }
}

// Main function where the logic is executed
int main()
{
    char str[100]; // Declare input buffer to store the string

    // Prompt user for input
   // printf("Enter the string with more spaces in between two words\n");

    // Read full line including spaces until newline is encountered
    scanf("%[^\n]", str);

    // Call function to clean up extra spaces
    remove_blank(str);

    // Display the cleaned-up string
    printf("%s", str);

    return 0; // Program executed successfully
}