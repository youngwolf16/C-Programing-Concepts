/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 09-10-2025
Program Name : To reverse the given string using recursive method

Sample Input : 

Enter a string : Hello World

Sample Output:

Reverse string is : dlroW olleH

*/

#include <stdio.h>

// Recursive function to reverse a string 
void reverse_recursive(char str[], int ind, int len)
{
    char temp;

    // Base case
    if(ind >= len)
        return;

    // Swap characters at current positions
    temp = str[ind];
    str[ind] = str[len];
    str[len] = temp;

    // Recursive calling function until base case fails
    reverse_recursive(str, ind + 1, len - 1);
}

int main()
{
    char str[30];  // input string


    printf("Enter any string : ");
    scanf("%[^\n]", str);  // Read full line

    int length = 0;

    //length of the string
    while(str[length] != '\0')
    {
        length++;
    }

    // Call recursive function
    reverse_recursive(str, 0, length - 1);

    // Print the reversed string
    printf("Reversed string is %s\n", str);
}