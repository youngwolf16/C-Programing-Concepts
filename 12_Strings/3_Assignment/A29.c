/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 16-10-2025
Program Name : to print all possible combinations of given string

Sample Input : 

Enter a string: abc

Sample Output:

All possible combinations of given string :abc
acb
bca
bac
cab
cba


*/

#include <stdio.h>

// Function to generate all combinations of the string
void combination(char str[], int start, int end)
{
    char temp;

    // If start index reaches end, print the String
    if(start == end)
    {
        printf("%s\n", str);
    }
    else
    {
        // Loop through each character from start to end
        for(int i = start; i <= end; i++)
        {
            // Swap characters at positions start and i
            temp = str[i];
            str[i] = str[start];
            str[start] = temp;
            //printf("%s\n", str);
            // Recursively call 
            combination(str, start + 1, end);
            //swap back to restore original string
            temp = str[i];
            str[i] = str[start];
            str[start] = temp;
            //printf("%s\n", str);
        }
    }
}

//check for duplicate characters
int Duplicate(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        int j = i + 1;
        while(str[j] != '\0')
        {
            if(str[i] == str[j])
            {
                return 1; // Duplicate found
            }
            j++;
        }
        i++;
    }
    return 0; // All characters are distinct
}


// Function to calculate length of the string
int length(char *str)
{
    int i = 0;
    while(str[i] != '\0')  // Loop until end of string
    {
        i++;
    }

    return i;
}

int main()
{
    int n;
    char str[100];  // input string

    scanf("%[^\n]", str);  // Read input of the string

    if(Duplicate(str))
    {
        printf("please enter distinct characters.\n");
    }
    else
    {
        n = length(str);       // Get length of string
        printf("All possible combinations of given string :");
        combination(str, 0, n - 1);  // Generate Combinations of the strings
    }
    return 0;
}