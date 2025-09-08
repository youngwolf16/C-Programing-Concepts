/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 29-08-2025
Program Name : generate positive Fibonacci numbers
Sample Input : 5
Sample Output: 0 1 1 2 3 5
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Main function where the logic is executed
int main()
{
    // Initialize required Variables
    int num, first = 0, second = 1, sum = 0;

    // accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // checking the number is not negative
    if (num >= 0)
    {
        // checking condition to print number upto the user input number
        while (sum <= num)
        {
            // printing the fibonacci numbers
            printf("%d ", sum);
            first = second;       // assigning first number as second
            second = sum;         // assigning second number as first
            sum = first + second; // adding first and second storing in sum
        }
    }
    // printing error message if number is negative
    else
    {
        printf("Invalid input");
    }

    // Program executed successfully
    return 0;
}