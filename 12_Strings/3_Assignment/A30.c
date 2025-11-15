/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 18-10-2025
Program Name : to check given string is Pangram or not

Sample Input : 

Enter the string: The quick brown fox jumps over the lazy dog

Sample Output:

The Entered String is a Pangram String


*/

#include <stdio.h>

// Function to check how many unique alphabet letters are present in the string
int pangram(char str[])
{
    int i = 0;

    // Array to track 
    int arr[26] = {0};

    
    int count = 0;

    // Traverse the input string character by character
    while(str[i] != '\0')
    {
        // If character is uppercase, mark its presence
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            arr[str[i] - 65] = 1; // 'A' ASCII is 65
        }
        // If character is lowercase, mark its presence
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            arr[str[i] - 97] = 1; // 'a' ASCII is 97
        }

        i++; // Move to next character
    }

    // Count how many letters are marked as present
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
    }

    // Return the number of unique letters found
    return count;
}

int main()
{
    // Declare a string
    char str[200];

    // Read a line of input including spaces until newline
    scanf("%[^\n]", str);

    // Call the pangram function and store the result
    int result = pangram(str);

    // If all 26 letters are present, it's a pangram
    if(result == 26)
    {
        printf("The Entered String is a Pangram String\n");
    }
    else
    {
        printf("The Entered String is not a Pangram String\n");
    }

    return 0;
}