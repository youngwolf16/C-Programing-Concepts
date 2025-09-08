/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 02-09-2025
Program Name : print the numbers in X format
Sample Input : 5
Sample Output: 

           1___5
           _2_4_
           __3__
           _2_4_
           1___5

*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Main function where the logic is executed
int main()
{
    // Initialize required Variables
    int num, sum = 0; // 'num' stores user input; 'sum' is declared but unused

    // accepting input from the user
    printf("Enter the number: ");
    scanf("%d", &num); // Read an integer from user and store it in 'num'

    // checking the number is not negative
    if (num > 0) // Proceed only if the input is a positive number
    {
        // Outer loop to iterate through each row
        for(int i = 1; i <= num; i++)
        {
            // Inner loop to iterate through each column
            for(int j = 1; j <= num; j++)
            {
                // Condition to print numbers on the diagonals
                // 'i == j' is for the main diagonal
                // 'i + j == num + 1' is for the anti-diagonal
                if(i == j || i + j == num + 1)
                {
                    printf("%d", j); // Print the column number at diagonal positions
                }
                else
                {
                    printf(" "); // Print space elsewhere to maintain the X shape
                }
            }
            printf("\n"); // Move to the next line after each row
        }
    }

    // Program executed successfully
    return 0;
}