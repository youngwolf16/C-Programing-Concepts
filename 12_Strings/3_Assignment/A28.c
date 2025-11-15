/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 10-10-2025
Program Name : Squeeze the character in s1 that matches any character in the string s2

Sample Input : 

string 1: Dennis Ritchie
string 2: Linux

Sample Output:

After squeeze s1: Des Rtche

*/

#include <stdio.h> 

// Function to remove characters from str1 that match any character in str2
void my_squeeze(char *str1, char *str2)
{
    int i = 0;      // Index for traversing str1
    int j = 0;      // Index for traversing str2
    int k = 0;      // Index for shifting characters in str1
    int flag = 0;   // Flag 

    // Traverse each character of str1
    while (str1[i] != '\0')
    {
        flag = 0;   // Reset flag 
        j = 0;      // Reset j 

        // Check if str1[i] matches any character in str2
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                flag = 1;   // Match found
                break;      // No need to check further
            }

            j++;
        }

        // If a match is found, shift str1 left to remove the character
        if (flag == 1)
        {
            k = i;
            while (str1[k] != '\0')
            {
                str1[k] = str1[k + 1]; // Shift characters left
                k++;
            }
        }
        else
        {
            i++; // Move to next character in str1
        }
    }
}

// Main function where the logic is executed
int main()
{
    char str1[100];  // Input string 1
    char str2[100];  // Input string 2

    // Read string 1 
    scanf("%[^\n]", str1);
    getchar(); // Consume newline character

    // Read string 2
    scanf("%[^\n]", str2);

    // Call the squeeze function
    my_squeeze(str1, str2);

    // Display the cleaned-up string
    printf("After squeeze s1 : %s", str1);

    return 0; // Program executed successfully
}